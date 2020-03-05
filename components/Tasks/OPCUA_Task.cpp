/*
 * OPCUA_task.cpp
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "OPCUA_Task.h"
//#include "ADS_Task.h"
#include "tcpip_adapter.h"
#include "stdio.h"
#include "GeneralUtils.h"
#include "Task_Sync.h"
#include <esp_event.h>
#include <esp_log.h>
#include <esp_system.h>
#include <sys/param.h>
#include <nvs_flash.h>
#include <esp_task_wdt.h>
#include <esp_sntp.h>
//#include "ns2_di.h"
#include "ns1_tig4.h"
#include <open62541/plugin/log_stdout.h>

#define IPLEN 16 // 255.255.255.255\0 -> 16

const char* OPCUA_Task::OPCUA_TASK_TAG = "OPCUA_TASK";

OPCUA_Task::OPCUA_Task(std::string _taskName, uint16_t _stackSize, uint8_t _priority)
	: Task(_taskName, _stackSize, _priority) 
{
	opc_wm = new WeldingMachine();
}

OPCUA_Task::~OPCUA_Task()
{
	UA_Server_delete(server);
}

UA_StatusCode OPCUA_Task::UA_ServerConfig_setUriName(UA_ServerConfig* uaServerConfig, const char* uri, const char* name) {
	// delete pre-initialized values
	UA_String_deleteMembers(&uaServerConfig->applicationDescription.applicationUri);
	UA_LocalizedText_deleteMembers(&uaServerConfig->applicationDescription.applicationName);

	uaServerConfig->applicationDescription.applicationUri = UA_String_fromChars(uri);
	uaServerConfig->applicationDescription.applicationName.locale = UA_STRING_NULL;
	uaServerConfig->applicationDescription.applicationName.text = UA_String_fromChars(name);

	for (size_t i = 0; i < uaServerConfig->endpointsSize; i++) {
		UA_String_deleteMembers(&uaServerConfig->endpoints[i].server.applicationUri);
		UA_LocalizedText_deleteMembers(
			&uaServerConfig->endpoints[i].server.applicationName);

		UA_String_copy(&uaServerConfig->applicationDescription.applicationUri,
			&uaServerConfig->endpoints[i].server.applicationUri);

		UA_LocalizedText_copy(&uaServerConfig->applicationDescription.applicationName,
			&uaServerConfig->endpoints[i].server.applicationName);
	}

	return UA_STATUSCODE_GOOD;
}

void OPCUA_Task::run(void* data)
{
	ESP_ERROR_CHECK(esp_task_wdt_add(NULL));
	
	ESP_LOGI(OPCUA_TASK_TAG, "Initializing OPC UA. Free Heap: %d bytes", xPortGetFreeHeapSize());
	UA_Server* server = UA_Server_new();   //UA_Server_new() calls namespace0_generated()

	UA_ServerConfig* config = UA_Server_getConfig(server);

	ESP_LOGI(OPCUA_TASK_TAG, "Setup OPC UA Server.");
	
	UA_StatusCode UAerrRc = UA_ServerConfig_setMinimalCustomBuffer(config, 4840, NULL, 16000, 16000);
	if (UAerrRc != UA_STATUSCODE_GOOD)
	{
		ESP_LOGE(OPCUA_TASK_TAG, "UA_ServerConfig_setMinimalCustomBuffer: rc=%d %s", UAerrRc, GeneralUtils::errorToString(UAerrRc));
		abort();
	}
	const char* appUri = "http://merkle.de/TIG4WeldingMachine/";
	UA_ServerConfig_setUriName(config, appUri, "open62541 ESP32 TIG4 Demo");
	UA_String str = UA_STRING((char*)"esp32customhostname");
	UA_ServerConfig_setCustomHostname(config, str);

	printf("xPortGetFreeHeapSize before create = %d bytes\n", xPortGetFreeHeapSize());
	
	/* create nodes from nodeset */
	/*
	UA_StatusCode retval = ns2_di(server);
	if (retval != UA_STATUSCODE_GOOD) {
		UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Adding the DI namespace failed. Please check previous error output.");
		UA_Server_run_shutdown(server);
	}
	retval |= ns1_tig4(server);
	*/
	UA_StatusCode retval = ns1_tig4(server);
	if (retval != UA_STATUSCODE_GOOD) {
		UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Adding the TIG4 namespace failed. Please check previous error output.");
		UA_Server_run_shutdown(server);
	}
	
	UA_StatusCode retVal = UA_Server_run_startup(server);
	if (retVal != UA_STATUSCODE_GOOD) 
	{
		ESP_LOGI(OPCUA_TASK_TAG, "Creating OPC UA Server failed with code: %s", UA_StatusCode_name(retVal));
	}	
	ESP_LOGI(OPCUA_TASK_TAG, "opc.tcp://%.*s:/", (int)config->customHostname.length, config->customHostname.data);
	printf("xPortGetFreeHeapSize after create = %d bytes\n", xPortGetFreeHeapSize());
	while (true)
	{
		UA_Server_run_iterate(server, false);
		updateCurrent(server);
		updateVoltage(server);
		updateErrorCode(server);
		updateIsArcOn(server);
		ESP_ERROR_CHECK(esp_task_wdt_reset());
		taskYIELD();			
	}	

	UA_Server_run_shutdown(server);

	ESP_ERROR_CHECK(esp_task_wdt_delete(NULL));

}

void OPCUA_Task::memUsage(void)
{
	UBaseType_t uxHighWaterMark = uxTaskGetStackHighWaterMark(NULL);
	ESP_LOGI(OPCUA_TASK_TAG, "Memory: %d %d", (int)uxHighWaterMark, (int)esp_get_free_heap_size());
}

void OPCUA_Task::updateCurrent(UA_Server* server) 
{
	UA_Double now = ADS_Task::getSimulatedCurrent();
	UA_Variant value;
	UA_Variant_setScalar(&value, &now, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_NodeId currentNodeId = UA_NODEID_NUMERIC(1, 6002);
	UA_Server_writeValue(server, currentNodeId, value);
}

void OPCUA_Task::updateVoltage(UA_Server* server)
{
	UA_Double now = ADS_Task::getSimulatedVoltage();
	UA_Variant value;
	UA_Variant_setScalar(&value, &now, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_NodeId currentNodeId = UA_NODEID_NUMERIC(1, 6003);
	UA_Server_writeValue(server, currentNodeId, value);
}

void OPCUA_Task::updateErrorCode(UA_Server* server)
{
	UA_Tig4ErrorCode now = RS422_Task::getSimulatedErrorCode();
	UA_Variant value;
	UA_Variant_setScalar(&value, &now, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
	UA_NodeId currentNodeId = UA_NODEID_NUMERIC(1, 6022);
	UA_Server_writeValue(server, currentNodeId, value);
}

void OPCUA_Task::updateIsArcOn(UA_Server* server)
{
	UA_Boolean now = RS422_Task::getSimulatedIsArcOn();
	UA_Variant value;
	UA_Variant_setScalar(&value, &now, &UA_TYPES[UA_TYPES_BOOLEAN]);
	UA_NodeId currentNodeId = UA_NODEID_NUMERIC(1, 6001);
	UA_Server_writeValue(server, currentNodeId, value);
}

OPCUA_Task* OPCUA = new OPCUA_Task();