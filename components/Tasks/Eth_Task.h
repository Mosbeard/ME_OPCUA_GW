#pragma once

/*
 * Eth_Task.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#ifndef COMPONENTS_ETHER_TASK_H_
#define COMPONENTS_ETHER_TASK_H_

#include "Task_cxx.h"
#include "EtherCard.h"
#include "esp_eth.h"
#include "esp_eth_mac.h"
#include "esp_eth_phy.h"
#include "esp_eth_com.h"
#include "esp_event.h"


class Eth_Task : public Task {
public:	
	Eth_Task(BaseType_t _coreId = 1, std::string _taskName = "Eth_Task", uint16_t _stackSize = 4096, uint8_t _priority = 6);
	void run(void *data);
	
private:
	static const char* ETHER_TASK_TAG;
	static byte macaddr[];
	static SemaphoreHandle_t buf_lock;
	static esp_eth_mac_t* mac;
	static esp_eth_phy_t* phy;
	static esp_eth_mediator_t* eth_med;
	static eth_link_t link_stat;

	static inline bool transceive_buf_lock();
	static inline bool transceive_buf_unlock();

	static void eth_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data);
	static void got_ip_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data);

	static void time_sync_notification_cb(struct timeval* tv);
	static void initialize_sntp(void);
	static bool obtain_time(void);

	static esp_err_t emac_enc28j60_set_mediator(esp_eth_mac_t* mac, esp_eth_mediator_t* eth);
	static esp_err_t emac_enc28j60_initialize(esp_eth_mac_t* mac);
	static esp_err_t emac_enc28j60_deinit(esp_eth_mac_t* mac);
	static esp_err_t emac_enc28j60_del(esp_eth_mac_t* mac);
	static esp_err_t emac_enc28j60_write_phy_reg(esp_eth_mac_t* mac, uint32_t phy_addr, uint32_t phy_reg, uint32_t reg_value);
	static esp_err_t emac_enc28j60_readPhyByte(esp_eth_mac_t* mac, uint32_t phy_addr, uint32_t phy_reg, uint32_t* reg_value);
	static esp_err_t emac_enc28j60_copyMac(esp_eth_mac_t* mac, uint8_t* addr);
	static esp_err_t emac_enc28j60_get_addr(esp_eth_mac_t* mac, uint8_t* addr);
	static esp_err_t emac_enc28j60_set_speed(esp_eth_mac_t* mac, eth_speed_t speed);
	static esp_err_t emac_enc28j60_set_duplex(esp_eth_mac_t* mac, eth_duplex_t duplex);
	static esp_err_t emac_enc28j60_set_link(esp_eth_mac_t* mac, eth_link_t link);
	static esp_err_t emac_enc28j60_set_promiscuous(esp_eth_mac_t* mac, bool enable);
	static esp_err_t emac_enc28j60_packetSend(esp_eth_mac_t* mac, uint8_t* buf, uint32_t length);
	static esp_err_t emac_enc28j60_packetReceive(esp_eth_mac_t* mac, uint8_t* buf, uint32_t* length);

	static esp_err_t ephy_enc28j60_reset(esp_eth_phy_t* phy);
	static esp_err_t ephy_enc28j60_init(esp_eth_phy_t* phy);
	static esp_err_t ephy_enc28j60_deinit(esp_eth_phy_t* phy);
	static esp_err_t ephy_enc28j60_set_mediator(esp_eth_phy_t* phy, esp_eth_mediator_t* eth);
	static esp_err_t ephy_enc28j60_negotiate(esp_eth_phy_t* phy);
	static esp_err_t ephy_enc28j60_isLinkUp(esp_eth_phy_t* phy);
	static esp_err_t ephy_enc28j60_pwrctl(esp_eth_phy_t* phy, bool enable);
	static esp_err_t ephy_enc28j60_get_addr(esp_eth_phy_t* phy, uint32_t* addr);
	static esp_err_t ephy_enc28j60_set_addr(esp_eth_phy_t* phy, uint32_t addr);
	static esp_err_t ephy_enc28j60_del(esp_eth_phy_t* phy);
};

extern Eth_Task* Ether;
#endif /* COMPONENTS_ETHER_TASK_H_ */