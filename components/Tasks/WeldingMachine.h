/*
 * WeldingMachine.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#ifndef WELDING_MACHINE_H_
#define WELDING_MACHINE_H_

#include "stdint.h"

class WeldingMachine{
public:	
	WeldingMachine();
	uint16_t get_c_current() const { return c_current; }
	void set_c_current(const uint16_t& c_current) { this->c_current = c_current; }
	uint16_t get_c_voltage() const { return c_voltage; }
	void set_c_voltage(const uint16_t& c_voltage) { this->c_voltage = c_voltage; }
	
	private:
	uint16_t c_current;
	uint16_t c_voltage;	
};

extern WeldingMachine* if_wm;

#endif /* WELDING_MACHINE_H_ */