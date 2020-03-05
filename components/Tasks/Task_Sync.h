#pragma once
#include <freertos/FreeRTOS.h> 
#include <freertos/semphr.h> 

class Task_Sync {
	public:
		static SemaphoreHandle_t got_ip_sem;
};
