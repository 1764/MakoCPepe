#include <Commands/Shooter/ShootWithJoystick.h>

ShootWithJoystick::ShootWithJoystick()
{
	Requires(flywheel);
}

void ShootWithJoystick::Initialize()
{

}

void ShootWithJoystick::Execute()
{
	//Do Not Delete
	/*if(oi->GetPilotButton(oi->LOGITECH_EXTREME3D_BUTTON_TRIGGER))
	{
		x = -1;
		y = 1;
	}
	else
	{
		x = 0;
		y = 0;
	}*/
	double x = oi->GetCopilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Z);
	double y = oi->GetCopilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Y);
	flywheel->SetSpeed(x);
	spindle->SetSpeed(y);
}

bool ShootWithJoystick::IsFinished()
{
	return false;
}

void ShootWithJoystick::End()
{
	flywheel->SetSpeed(0);
	spindle->SetSpeed(0);
}

void ShootWithJoystick::Interrupted()
{
	flywheel->SetSpeed(0);
	spindle->SetSpeed(0);
}
