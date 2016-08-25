#include <Commands/DriveWithJoystick.h>
#include <iostream>

DriveWithJoystick::DriveWithJoystick()
{
	Requires(drive_train);
}

void DriveWithJoystick::Initialize()
{
}

void DriveWithJoystick::Execute()
{
	double y = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Y);
	double z = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Z);
	if(!last && oi->GetPilotButton(oi->LOGITECH_EXTREME3D_BUTTON_THUMB)) {
		dir *= -1;
	}
	//double a = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_SLIDER);
	//y = Adjust(y, a);
	//z = Adjust(z, a);
	drive_train->SetLeft((-y*dir)+z);
	drive_train->SetRight((y*dir)+z);
	last = oi->GetPilotButton(oi->LOGITECH_EXTREME3D_BUTTON_THUMB);
}

bool DriveWithJoystick::IsFinished()
{
	return false;
}

void DriveWithJoystick::End()
{

}

void DriveWithJoystick::Interrupted()
{

}
