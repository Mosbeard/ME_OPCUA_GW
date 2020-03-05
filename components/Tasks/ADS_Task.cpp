/*
 * ADS_Task.cpp
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#include "ADS_Task.h"
#include "WeldingMachine.h"

#define ADS1015_I2C_AD 0x49

const char* ADS_Task::ADS_TASK_TAG = "ADS_TASK"; 

ADS_Task::ADS_Task(BaseType_t _coreId, std::string _taskName, uint16_t _stackSize, uint8_t _priority)
	: Task(_coreId, _taskName, _stackSize, _priority)
{
	ads = Adafruit_ADS1015(ADS1015_I2C_AD);
}

void ADS_Task::run(void* data)
{
	
	Serial.begin(115200);

	Serial.println("Getting single-ended readings from AIN0..3");
	Serial.println("ADC Range: +/- 6.144V (1 bit = 3mV/ADS1015, 0.1875mV/ADS1115)");
	
	// The ADC input range (or gain) can be changed via the following
	// functions, but be careful never to exceed VDD +0.3V max, or to
	// exceed the upper and lower limits if you adjust the input range!
	// Setting these values incorrectly may destroy your ADC!
	//                                                                ADS1015  ADS1115
	//                                                                -------  -------
	// ads.setGain(GAIN_TWOTHIRDS);  // 2/3x gain +/- 6.144V  1 bit = 3mV      0.1875mV (default)
	   ads.setGain(GAIN_ONE);        // 1x gain   +/- 4.096V  1 bit = 2mV      0.125mV //laut Schlander
	// ads.setGain(GAIN_TWO);        // 2x gain   +/- 2.048V  1 bit = 1mV      0.0625mV
	// ads.setGain(GAIN_FOUR);       // 4x gain   +/- 1.024V  1 bit = 0.5mV    0.03125mV
	// ads.setGain(GAIN_EIGHT);      // 8x gain   +/- 0.512V  1 bit = 0.25mV   0.015625mV
	// ads.setGain(GAIN_SIXTEEN);    // 16x gain  +/- 0.256V  1 bit = 0.125mV  0.0078125mV

	ads.begin();

	while (1)
	{
		adc0 = ads.readADC_SingleEnded(0);
		adc1 = ads.readADC_SingleEnded(1);
		adc2 = ads.readADC_SingleEnded(2);
		adc3 = ads.readADC_SingleEnded(3);
		
		adc0 = ads.convertFrom12bit2KtoDec(adc0) * 2;  // 1bit = 2mV
		adc1 = ads.convertFrom12bit2KtoDec(adc1) * 2;
		adc2 = ads.convertFrom12bit2KtoDec(adc2) * 2;
		adc3 = ads.convertFrom12bit2KtoDec(adc3) * 2;
		/*
		Serial.print("AIN0: "); Serial.print(adc0); Serial.println(" mV");
		Serial.print("AIN1: "); Serial.print(adc1); Serial.println(" mV");
		Serial.print("AIN2: "); Serial.print(adc2); Serial.println(" mV");
		Serial.print("AIN3: "); Serial.print(adc3); Serial.println(" mV");
		*/
		//625 mV entspricht ca 400 A
		//1290 mV entspricht ca 39 V
		adc2 = (int16_t)((float)adc2 * 0.64f);
		adc3 = (int16_t)((float)adc3 * 0.0302f);
		/*
		Serial.print("I ist: "); Serial.print(adc2); Serial.println(" A");
		Serial.print("U ist: "); Serial.print(adc3); Serial.println(" V");
 		Serial.println(" ");
		*/
		delay(2000);
	}
	vTaskDelete(NULL);
}

double ADS_Task::getSimulatedCurrent(void) {
	return ADS_Task::get_random(3.0, 220.0);
}

double ADS_Task::getSimulatedVoltage(void) {
	return ADS_Task::get_random(10.0, 18.8);
}

double ADS_Task::get_random(double min, double max) {
	return ((double)rand() * (max - min) / (double)RAND_MAX - min);
}

ADS_Task* analog_reader = new ADS_Task();