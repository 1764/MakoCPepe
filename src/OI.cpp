#include "OI.h"

OI::OI()
{
	pilot = new Joystick(0);
}

double OI::GetPilotAxis(int axis)
{
	return pilot->GetRawAxis(axis);
}


bool OI::GetPilotButton(int button)
{
	return pilot->GetRawButton(button);
}


