/*
 * ME_WiFiEventHandler.cpp
 *
 *  Created on: Sep 09, 2019
 *      Author: graf
 */

#include "WiFi_Task.h"
#include "esp_log.h"


const char* ME_WiFiEventHandler::TAG = "WIFI_TASK";

esp_err_t ME_WiFiEventHandler::apStaConnected(system_event_ap_staconnected_t info)
{	
	ESP_LOGI(TAG,
		"station:" MACSTR" join, AID=%d",
		MAC2STR(info.mac),
		info.aid);
	   return ESP_OK;	
}

esp_err_t ME_WiFiEventHandler::apStaDisconnected(system_event_ap_stadisconnected_t info) 
{
	ESP_LOGI(TAG,
		"station:" MACSTR"leave, AID=%d",
		MAC2STR(info.mac),
		info.aid);
	   return ESP_OK;	
}

ME_WiFiEventHandler WiFi_Handler = ME_WiFiEventHandler();

WiFi ME_WiFi = WiFi();