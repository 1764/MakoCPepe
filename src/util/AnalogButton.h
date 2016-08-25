/*
 * AnalogButton.h
 *
 *  Created on: Feb 21, 2016
 *      Author: fastcompy
 */

#ifndef SRC_UTIL_ANALOGBUTTON_H_
#define SRC_UTIL_ANALOGBUTTON_H_

#include "WPILib.h"

class AnalogButton: public Button {
private:
	GenericHID* m_joystick;
	int m_axisNumber;
	double m_threshold;
public:
	AnalogButton(double threshold, int axis, GenericHID* joystick);
	virtual bool Get();
};

#endif /* SRC_UTIL_ANALOGBUTTON_H_ */
