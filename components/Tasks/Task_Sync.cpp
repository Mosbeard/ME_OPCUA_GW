#include "Task_Sync.h"
#include "FreeRTOS.h"
#include <freertos/task.h> 
#include <freertos/FreeRTOS.h> 
#include <freertos/semphr.h> 

SemaphoreHandle_t Task_Sync::got_ip_sem = xSemaphoreCreateBinary();