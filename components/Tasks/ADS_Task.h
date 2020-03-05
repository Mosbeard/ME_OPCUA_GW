#pragma once

/*
 * ADS_Task.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#ifndef COMPONENTS_ADS_TASK_H_
#define COMPONENTS_ADS_TASK_H_

#include "Task_cxx.h"
#include <Wire.h>
#include "Adafruit_ADS1015.h"
#include <freertos.h>



class ADS_Task : public Task {
public:	
	ADS_Task(BaseType_t _coreId = 1, std::string _taskName = "ads", uint16_t _stackSize = 4096, uint8_t _priority = 6);
	void run(void *data);
	static double getSimulatedCurrent(void);
	static double getSimulatedVoltage(void);
	
private:
	static const char* ADS_TASK_TAG;
	Adafruit_ADS1015 ads;
	static double get_random(double min, double max);
	int16_t adc0;
	int16_t adc1;
	int16_t adc2;
	int16_t adc3;
};

extern ADS_Task* analog_reader;
#endif /* COMPONENTS_ETHER_TASK_H_ */