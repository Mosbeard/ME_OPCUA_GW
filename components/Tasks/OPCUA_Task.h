#pragma once

/*
 * OPCUA_task.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#ifndef COMPONENTS_OPCUA_TASK_H_
#define COMPONENTS_OPCUA_TASK_H_

//#include "open62541.h"
#include "ADS_Task.h"
#include "RS422_task.h"
#include "open62541/server.h"
#include "open62541/server_config_default.h"
#include "Task_cxx.h"
#include "WeldingMachine.h"

class OPCUA_Task : public Task {
public:	
	OPCUA_Task(std::string _taskName = "OPCUA_Task", uint16_t _stackSize = 24336, uint8_t _priority = 6);
	~OPCUA_Task();
	void run(void *data);	
	
private:
	static const char* OPCUA_TASK_TAG;
	UA_Boolean running;
	UA_ServerConfig* srv_config;
	UA_Server* server;
	WeldingMachine* opc_wm;
	void memUsage(void);
	static void updateCurrent(UA_Server* server);
	static void updateVoltage(UA_Server* server);
	static void updateErrorCode(UA_Server* server);
	static void updateIsArcOn(UA_Server* server);
	static UA_StatusCode UA_ServerConfig_setUriName(UA_ServerConfig* uaServerConfig, const char* uri, const char* name);
	//static void updateCurrentCurrent(UA_Server* server, WeldingMachine* wm);
	//void addCurrentCurrentVariable(UA_Server* server, WeldingMachine* wm);
	//static void beforeReadCurrent(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId* nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data);
	//static void afterWriteCurrent(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeId, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data);
	//void addValueCallbackToCurrentCurrentVariable(UA_Server *server);
	//static UA_StatusCode readCurrentCurrent(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeId, void *nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange *range, UA_DataValue *dataValue); 
	//static UA_StatusCode writeCurrentCurrent(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeId, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data);
	//void addCurrentCurrentDataSourceVariable(UA_Server *server);
	//void addVariable(UA_Server *server, const char* _description, const char* _displayName, const char* _myNodeId, const char* _myQualifiedName, UA_Int32 _value);
	//void writeVariable(UA_Server* server, const char* _myNodeId, UA_Int32 _value);
	//void manuallyDefineWeldingMachine(UA_Server *server);
	//void manuallyDefinePump(UA_Server *server); 	
};

extern OPCUA_Task* OPCUA;

#endif /* COMPONENTS_OPCUA_TASK_H_ */