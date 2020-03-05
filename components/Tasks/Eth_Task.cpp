/*
 * Ether_Task.cpp
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#include "Eth_Task.h"
#include "esp_log.h"
#include "EtherCard.h"
#include "tcpip_adapter.h"
#include "enc28j60.h"
#include "nvs_flash.h"
#include "OPCUA_Task.h"
#include "Task_Sync.h"
#include "freertos/semphr.h"
#include <esp_task_wdt.h>
#include <esp_sntp.h>
#include <esp_system.h>
#include <sntp/sntp.h>

#define TRANSCEIVE_BUF_LOCK_TIMEOUT_MS (50)
 // max frame length which the controller will accept:
 // (note: maximum ethernet frame length would be 1518)
#define MAX_FRAMELEN      1500

#define DEBUG

uint8_t Ethernet::buffer[1518];

const char* Eth_Task::ETHER_TASK_TAG = "ETHER_TASK"; 

byte Eth_Task::macaddr[] =  { 0x74,0x69,0x69,0x2D,0x30,0x31 };

SemaphoreHandle_t Eth_Task::buf_lock = xSemaphoreCreateMutex();
esp_eth_mac_t* Eth_Task::mac = (esp_eth_mac_t*) calloc(1, sizeof(esp_eth_mac_t));
esp_eth_phy_t* Eth_Task::phy = (esp_eth_phy_t*) calloc(1, sizeof(esp_eth_phy_t));
esp_eth_mediator_t* Eth_Task::eth_med = (esp_eth_mediator_t*) calloc(1, sizeof(esp_eth_mediator_t));
eth_link_t Eth_Task::link_stat = ETH_LINK_DOWN;

Eth_Task::Eth_Task(BaseType_t _coreId, std::string _taskName, uint16_t _stackSize, uint8_t _priority)
	: Task(_coreId, _taskName, _stackSize, _priority)
{
	//buf_lock = xSemaphoreCreateMutex();

	Eth_Task::mac->set_mediator = emac_enc28j60_set_mediator;
	Eth_Task::mac->init = emac_enc28j60_initialize;
	Eth_Task::mac->deinit = emac_enc28j60_deinit;
	Eth_Task::mac->del = emac_enc28j60_del;
	Eth_Task::mac->write_phy_reg = emac_enc28j60_write_phy_reg;
	Eth_Task::mac->read_phy_reg = emac_enc28j60_readPhyByte;
	Eth_Task::mac->set_addr = emac_enc28j60_copyMac;
	Eth_Task::mac->get_addr = emac_enc28j60_get_addr;
	Eth_Task::mac->set_speed = emac_enc28j60_set_speed;
	Eth_Task::mac->set_duplex = emac_enc28j60_set_duplex;
	Eth_Task::mac->set_link = emac_enc28j60_set_link;
	Eth_Task::mac->set_promiscuous = emac_enc28j60_set_promiscuous;
	Eth_Task::mac->transmit = emac_enc28j60_packetSend;
	Eth_Task::mac->receive = emac_enc28j60_packetReceive;
	
	Eth_Task::phy->reset = ephy_enc28j60_reset;
	Eth_Task::phy->init = ephy_enc28j60_init;
	Eth_Task::phy->deinit = ephy_enc28j60_deinit;
	Eth_Task::phy->set_mediator = ephy_enc28j60_set_mediator;
	Eth_Task::phy->negotiate = ephy_enc28j60_negotiate;
	Eth_Task::phy->get_link = ephy_enc28j60_isLinkUp;
	Eth_Task::phy->pwrctl = ephy_enc28j60_pwrctl;
	Eth_Task::phy->get_addr = ephy_enc28j60_get_addr;
	Eth_Task::phy->set_addr = ephy_enc28j60_set_addr;
	Eth_Task::phy->del = ephy_enc28j60_del;
	
}

inline bool Eth_Task::transceive_buf_lock()
{
	return xSemaphoreTake(buf_lock, TRANSCEIVE_BUF_LOCK_TIMEOUT_MS) == pdTRUE;
}

inline bool Eth_Task::transceive_buf_unlock()
{
	return xSemaphoreGive(buf_lock) == pdTRUE;
}

void Eth_Task::initialize_sntp(void)
{
	ESP_LOGI(ETHER_TASK_TAG, "Initializing SNTP");
	sntp_setoperatingmode(SNTP_OPMODE_POLL);
	sntp_setservername(0, "pool.ntp.org");
	sntp_set_time_sync_notification_cb(time_sync_notification_cb);
	sntp_init();
}

void Eth_Task::time_sync_notification_cb(struct timeval* tv)
{
	ESP_LOGI(ETHER_TASK_TAG, "Notification of a time synchronization event");
}

bool Eth_Task::obtain_time(void)
{
	initialize_sntp();

	ESP_ERROR_CHECK(esp_task_wdt_add(NULL));
	// wait for time to be set
	time_t now = 0;
	struct tm timeinfo;
	memset(&timeinfo, 0, sizeof(struct tm));
	int retry = 0;
	const int retry_count = 10;
	while (sntp_get_sync_status() == SNTP_SYNC_STATUS_RESET && ++retry <= retry_count) {
		ESP_LOGI(ETHER_TASK_TAG, "Waiting for system time to be set... (%d/%d)", retry, retry_count);
		vTaskDelay(2000 / portTICK_PERIOD_MS);
		ESP_ERROR_CHECK(esp_task_wdt_reset());
	}
	time(&now);
	localtime_r(&now, &timeinfo);
	ESP_ERROR_CHECK(esp_task_wdt_delete(NULL));
	return timeinfo.tm_year > (2016 - 1900);
}

void Eth_Task::eth_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data)
{
	uint8_t mac_addr[6] = { 0 };
	/* we can get the ethernet driver handle from event data */
	esp_eth_handle_t eth_handle = *(esp_eth_handle_t*)event_data;

	switch (event_id) {
	case ETHERNET_EVENT_CONNECTED:
		esp_eth_ioctl(eth_handle, ETH_CMD_G_MAC_ADDR, mac_addr);
#ifdef DEBUG
		ESP_LOGI(ETHER_TASK_TAG, "Ethernet Link Up");
		ESP_LOGI(ETHER_TASK_TAG, "Ethernet HW Addr %02x:%02x:%02x:%02x:%02x:%02x",
			mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
#endif
		break;
	case ETHERNET_EVENT_DISCONNECTED:
		ESP_LOGI(ETHER_TASK_TAG, "Ethernet Link Down");
		break;
	case ETHERNET_EVENT_START:
		ESP_LOGI(ETHER_TASK_TAG, "Ethernet Started");
		break;
	case ETHERNET_EVENT_STOP:
		ESP_LOGI(ETHER_TASK_TAG, "Ethernet Stopped");
		break;
	default:
		break;
	}
}

void Eth_Task::got_ip_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data)
{
	ip_event_got_ip_t* event = (ip_event_got_ip_t*)event_data;
	const tcpip_adapter_ip_info_t* ip_info = &event->ip_info;
	
	ESP_LOGI(ETHER_TASK_TAG, "Ethernet Got IP Address");
	ESP_LOGI(ETHER_TASK_TAG, "~~~~~~~~~~~");
	ESP_LOGI(ETHER_TASK_TAG, "ETHIP:" IPSTR, IP2STR(&ip_info->ip));
	ESP_LOGI(ETHER_TASK_TAG, "ETHMASK:" IPSTR, IP2STR(&ip_info->netmask));
	ESP_LOGI(ETHER_TASK_TAG, "ETHGW:" IPSTR, IP2STR(&ip_info->gw));
	ESP_LOGI(ETHER_TASK_TAG, "~~~~~~~~~~~");

	//xSemaphoreGive(Task_Sync::got_ip_sem);

	time_t now;
	struct tm timeinfo;
	time(&now);
	localtime_r(&now, &timeinfo);
	// Is time set? If not, tm_year will be (1970 - 1900).
	if (timeinfo.tm_year < (2016 - 1900)) {
		ESP_LOGI(ETHER_TASK_TAG, "Time is not set yet. Connecting to WiFi and getting time over NTP.");
		if (!obtain_time()) {
			ESP_LOGE(ETHER_TASK_TAG, "Could not get time from NTP. Using default timestamp.");
		}
		// update 'now' variable with current time
		time(&now);
	}
	localtime_r(&now, &timeinfo);
	ESP_LOGI(ETHER_TASK_TAG, "Current time: %d-%02d-%02d %02d:%02d:%02d", timeinfo.tm_year + 1900, timeinfo.tm_mon + 1, timeinfo.tm_mday, timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);

	OPCUA->start();
}

esp_err_t Eth_Task::emac_enc28j60_set_mediator(esp_eth_mac_t* mac, esp_eth_mediator_t* eth)
{
	if (eth != NULL) {
		eth_med = eth;
		ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_set_mediator was called!");
		return ESP_OK;
	}
	return ESP_ERR_INVALID_ARG;
}

esp_err_t Eth_Task::emac_enc28j60_initialize(esp_eth_mac_t* mac)
{
	Ethernet::initialize(sizeof Ethernet::buffer, macaddr, SS);
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_initialize was called!");
#endif
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_deinit(esp_eth_mac_t* mac)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_deinit was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_del(esp_eth_mac_t* mac)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_del was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_write_phy_reg(esp_eth_mac_t* mac, uint32_t phy_addr, uint32_t phy_reg, uint32_t reg_value)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_write_phy_reg was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_readPhyByte(esp_eth_mac_t* mac, uint32_t phy_addr, uint32_t phy_reg, uint32_t* reg_value)
{
	ESP_LOGI(ETHER_TASK_TAG, "enc28j60_readPhyByte was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_copyMac(esp_eth_mac_t* mac, uint8_t* addr)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_copyMac was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_get_addr(esp_eth_mac_t* mac, uint8_t* addr)
{
	memcpy(addr, macaddr, 6);
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_get_addr was called!");
#endif
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_set_speed(esp_eth_mac_t* mac, eth_speed_t speed)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_set_speed was called!");
	return ESP_OK;;
}

esp_err_t Eth_Task::emac_enc28j60_set_duplex(esp_eth_mac_t* mac, eth_duplex_t duplex)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_set_duplex was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_set_link(esp_eth_mac_t* mac, eth_link_t link)
{
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_set_link was called!");
#endif
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_set_promiscuous(esp_eth_mac_t* mac, bool enable)
{
	ESP_LOGI(ETHER_TASK_TAG, "emac_enc28j60_set_promiscuous was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::emac_enc28j60_packetSend(esp_eth_mac_t* mac, uint8_t* buf, uint32_t length)
{
	if (transceive_buf_lock()) {
		memcpy(Ethernet::buffer, buf, length);
		Ethernet::packetSend(length);
		transceive_buf_unlock();
#ifdef DEBUG		
		ESP_LOGD(ETHER_TASK_TAG, "Ethernet driver had packet send...");
#endif
		return ESP_OK;
	}
	return ESP_ERR_TIMEOUT;
}

esp_err_t Eth_Task::emac_enc28j60_packetReceive(esp_eth_mac_t* mac, uint8_t* buf, uint32_t* length)
{
	if (transceive_buf_lock()) {
		*length = Ethernet::packetReceive();
		memcpy(buf, Ethernet::buffer, *length);
		transceive_buf_unlock();
		return ESP_OK;
	}
	return ESP_ERR_TIMEOUT;
}

esp_err_t Eth_Task::ephy_enc28j60_reset(esp_eth_phy_t* phy)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_reset was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_init(esp_eth_phy_t* phy)
{
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_init was called!");
#endif
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_deinit(esp_eth_phy_t* phy)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_deinit was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_set_mediator(esp_eth_phy_t* phy, esp_eth_mediator_t* eth)
{
	if (eth != NULL) {
		eth_med = eth;
#ifdef DEBUG
		ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_set_mediator was called!");
#endif
		return ESP_OK;
	}
	return ESP_ERR_INVALID_ARG;
}

esp_err_t Eth_Task::ephy_enc28j60_negotiate(esp_eth_phy_t* phy)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_negotiate was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_isLinkUp(esp_eth_phy_t* phy)
{
	esp_err_t ret;
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "before isLinkUp link_stat: %d", link_stat);
#endif
	if (Ethernet::isLinkUp()) {
		link_stat = ETH_LINK_UP;
	}
	else {
		link_stat = ETH_LINK_DOWN;
	}
	
	ret = eth_med->on_state_changed(eth_med, ETH_STATE_LINK, (void*)link_stat);
	if (ret != ESP_OK) {
		ESP_LOGE(ETHER_TASK_TAG, "send link event failed");
	}
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_isLinkUp was called!");
	ESP_LOGI(ETHER_TASK_TAG, "after isLinkUp link_stat: %d", link_stat);
#endif
	return ret;
}

esp_err_t Eth_Task::ephy_enc28j60_pwrctl(esp_eth_phy_t* phy, bool enable)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_pwrctl was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_get_addr(esp_eth_phy_t* phy, uint32_t* addr)
{
#ifdef DEBUG
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_get_addr was called!");
#endif
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_set_addr(esp_eth_phy_t* phy, uint32_t addr)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_set_addr was called!");
	return ESP_OK;
}

esp_err_t Eth_Task::ephy_enc28j60_del(esp_eth_phy_t* phy)
{
	ESP_LOGI(ETHER_TASK_TAG, "ephy_enc28j60_del was called!");
	return ESP_OK;
}

void Eth_Task::run(void* data)
{
	//ESP_ERROR_CHECK(esp_task_wdt_add(NULL));

	uint8_t* buffer = NULL;
	uint32_t length = 0;
	::nvs_flash_init();
	tcpip_adapter_init();
	
	ESP_ERROR_CHECK(esp_event_loop_create_default()); //wird bereits von wifi aufgerufen
	//wait for tcpip_adapter_set_default_eth_handlers() to initialize esp_netif[TCPIP_ADAPTER_IF_ETH] in tcpip_adapter_lwip.c & ethernetif.c
	ESP_ERROR_CHECK(tcpip_adapter_set_default_eth_handlers());
	ESP_ERROR_CHECK(esp_event_handler_register(ETH_EVENT, ESP_EVENT_ANY_ID, &eth_event_handler, NULL));
	ESP_ERROR_CHECK(esp_event_handler_register(IP_EVENT, IP_EVENT_ETH_GOT_IP, &got_ip_event_handler, NULL));

	esp_eth_config_t config = ETH_DEFAULT_CONFIG(mac, phy);
	esp_eth_handle_t eth_handle = NULL;
	ESP_ERROR_CHECK(esp_eth_driver_install(&config, &eth_handle));
	
	vTaskDelay(100 / portTICK_PERIOD_MS); //wait for tcpip_adapter_set_default_eth_handlers() to initialize esp_netif[TCPIP_ADAPTER_IF_ETH] in tcpip_adapter_lwip.c & ethernetif.c
	//UBaseType_t prio;
	while (1)
	{
		//ESP_LOGD(ETHER_TASK_TAG, "Task Eth_Task executes...");
		//prio = uxTaskPriorityGet(NULL);
		/*
		if (prio > 5) {
			vTaskPrioritySet(NULL, 6); // test
		}
		*/
#ifdef DEBUG
		heap_caps_check_integrity(MALLOC_CAP_DMA, true);
#endif
		buffer = (uint8_t*)heap_caps_malloc(MAX_FRAMELEN, MALLOC_CAP_DMA);
#ifdef DEBUG
		heap_caps_check_integrity(MALLOC_CAP_DMA, true);
#endif
		if (mac->receive(mac, buffer, &length) == ESP_OK)
		{
			// pass the buffer to lwIP stack (e.g. TCP/IP layer) 
			if (length)
			{
				eth_med->stack_input(eth_med, buffer, length); //esp_netif[TCPIP_ADAPTER_IF_ETH] has to be initialized for stack_input to work
				//ESP_LOGD(ETHER_TASK_TAG, "Task Eth_Task passed packet to stack_input...");
				//ESP_LOGD(ETHER_TASK_TAG, "Task Eth_Task Priority is: %d", prio);
				//ESP_ERROR_CHECK(esp_task_wdt_reset());
				//taskYIELD();
			}
			else
			{
				free(buffer);
			}
		}
		else
		{
			free(buffer);
		}
		//ESP_ERROR_CHECK(esp_task_wdt_reset());
		vTaskDelay(10 / portTICK_PERIOD_MS); //the ethernet driver logic dont have time to send packets when you dont delay the task
	}
	vTaskDelete(NULL);
}

Eth_Task* Ether = new Eth_Task();