/*
 * AnalogButton.cpp
 *
 *  Created on: Feb 21, 2016
 *      Author: fastcompy
 */

#include <util/AnalogButton.h>

AnalogButton::AnalogButton(double threshold, int axis, GenericHID* joystick) {
	m_threshold = threshold;
	m_axisNumber = axis;
	m_joystick = joystick;
}

bool AnalogButton::Get()
{
	if (m_threshold > 0)
	{
		return m_joystick->GetRawAxis(m_axisNumber) > m_threshold;
	}
	else if (m_threshold < 0)
	{
		return m_joystick->GetRawAxis(m_axisNumber) < m_threshold;
	}
	return false;
}
