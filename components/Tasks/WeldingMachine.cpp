/*
 * WeldingMachine.cpp
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#include "WeldingMachine.h"

WeldingMachine::WeldingMachine()
{
	c_current = 0;
	c_voltage = 0;
}

WeldingMachine* if_wm = new WeldingMachine();