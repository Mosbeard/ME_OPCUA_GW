/* ME_OPCUA_SRV
*/

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_log.h"
#include <stdio.h>
#include <string>
#include "RS422_task.h"
#include "WiFi_Task.h"
#include "OPCUA_Task.h"
#include "Eth_Task.h"
#include "ADS_Task.h"
#include <esp_task_wdt.h>
#include <nvs_flash.h>

extern "C" 
{
	void app_main();
}

#define WIFI_SSID      "MYOPCUASSID"
#define WIFI_PASS      "mypassword"
#define MAX_STA_CONN   4
#define HOSTNAME	   "ESP32_DevKitC_V4"

//static const char* APP_MAIN = "APP_MAIN";

void app_main() 
{	
	/*
	nvs_flash_init();
	tcpip_adapter_init();

	ESP_ERROR_CHECK(esp_event_loop_create_default()); //wird bereits von wifi aufgerufen
	*/
	
	
	ESP_ERROR_CHECK(esp_task_wdt_init(20, true));
	// Remove idle tasks from watchdog
	ESP_ERROR_CHECK(esp_task_wdt_delete(xTaskGetIdleTaskHandleForCPU(0)));
	ESP_ERROR_CHECK(esp_task_wdt_delete(xTaskGetIdleTaskHandleForCPU(1)));
	
	/*
	//wait for tcpip_adapter_set_default_eth_handlers() to initialize esp_netif[TCPIP_ADAPTER_IF_ETH] in tcpip_adapter_lwip.c & ethernetif.c
	ESP_ERROR_CHECK(tcpip_adapter_set_default_eth_handlers());
	ESP_ERROR_CHECK(esp_event_handler_register(ETH_EVENT, ESP_EVENT_ANY_ID, &Eth_Task::eth_event_handler, NULL));
	ESP_ERROR_CHECK(esp_event_handler_register(IP_EVENT, IP_EVENT_ETH_GOT_IP, &Eth_Task::got_ip_event_handler, NULL));
	*/
	//RS422->start();
	analog_reader->start();

	//ME_WiFi.setWifiEventHandler(&WiFi_Handler);
	//ME_WiFi.startAP(WIFI_SSID, WIFI_PASS);

	Ether->start();


	/*
	ESP_LOGD(APP_MAIN, "before inifinite loop");
	char _pcWriteBuffer[350];// = (char*)malloc(400);
	UBaseType_t prio;
	while (1) {
		ESP_LOGD(APP_MAIN, "Task app_main executes...");
		prio = uxTaskPriorityGet(NULL);
		ESP_LOGD(APP_MAIN, "Task app_main Priority is: %d", prio);
		vTaskList(_pcWriteBuffer);
		printf("**************************************\n");
		for (int i = 0; i < 350; i++) {
			printf("%c", _pcWriteBuffer[i]);
		}
		printf("\n**************************************\n");
		vTaskDelay(3000 / portTICK_PERIOD_MS);
	}
	ESP_LOGD(APP_MAIN, "after inifinite loop");
	*/
}