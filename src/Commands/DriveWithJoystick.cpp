#include <Commands/DriveWithJoystick.h>

DriveWithExponentialJoystick::DriveWithExponentialJoystick()
{
	Requires(drive_train);
}

void DriveWithExponentialJoystick::Initialize()
{
}

void DriveWithExponentialJoystick::Execute()
{
	double y = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Y);
	double z = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Z);
	//double a = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_SLIDER);
	//y = Adjust(y, a);
	//z = Adjust(z, a);
	drive_train->SetLeft(-y+z);
	drive_train->SetRight(y+z);
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
