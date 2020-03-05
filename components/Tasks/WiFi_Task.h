/*
 * WiFiEventHandler.h
 *
 *  Created on: Sep, 2019
 *      Author: graf
 *
 * A WiFiEventHandler defines a class that has methods that will be called back when a WiFi event is
 * detected.
 *
 * Typically this class is subclassed to provide implementations for the callbacks we want to handle.
 *
 * class MyHandler: public WiFiEventHandler {
 *   esp_err_t apStart() {
 *      ESP_LOGD(tag, "MyHandler(Class): apStart");
 *      return ESP_OK;
 *   }
 * }
 *
 * WiFi wifi;
 * MyHandler *eventHandler = new MyHandler();
 * wifi.setWifiEventHandler(eventHandler);
 * wifi.startAP("MYSSID", "password");
 *
 * The overridable functions are:
 * * esp_err_t apStaConnected(system_event_ap_staconnected_t info)
 * * esp_err_t apStaDisconnected(system_event_ap_stadisconnected_t info)
 * * esp_err_t apStart()
 * * esp_err_t apStop()
 * * esp_err_t staConnected(system_event_sta_connected_t info)
 * * esp_err_t staDisconnected(system_event_sta_disconnected_t info)
 * * esp_err_t staGotIp(system_event_sta_got_ip_t info)
 * * esp_err_t staScanDone(system_event_sta_scan_done_t info)
 * * esp_err_t staAuthChange(system_event_sta_authmode_change_t info)
 * * esp_err_t staStart()
 * * esp_err_t staStop()
 * * esp_err_t wifiReady()
 */

#ifndef WIFI_TASK_H_
#define WIFI_TASK_H_

#include "WiFiEventHandler.h"
#include "WiFi.h"

class ME_WiFiEventHandler : public WiFiEventHandler
{
public:
	esp_err_t apStaConnected(system_event_ap_staconnected_t info);
	esp_err_t apStaDisconnected(system_event_ap_stadisconnected_t info);
private:
	static const char* TAG;
};

extern ME_WiFiEventHandler WiFi_Handler;

extern WiFi ME_WiFi;

#endif /* ME_WIFIEVENTHANDLER_H_ */