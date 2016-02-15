#include "DriveWithExponentialJoystick.h"

DriveWithExponentialJoystick::DriveWithExponentialJoystick()
{
	Requires(drive_train);
}

void DriveWithExponentialJoystick::Initialize()
{
}

void DriveWithExponentialJoystick::Execute()
{
	double y = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_X);
	double z = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Z);
	double a = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_SLIDER);
	y = Adjust(y, a);
	z = Adjust(z, a);
	drive_train->Set(y, z);
}

bool DriveWithExponentialJoystick::IsFinished()
{
	return false;
}

void DriveWithExponentialJoystick::End()
{

}

void DriveWithExponentialJoystick::Interrupted()
{

}

double DriveWithExponentialJoystick::Adjust(double joy, double a)
{
	return a * pow(joy, 3) + (1-a) * joy;
}
