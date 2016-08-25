#include <Commands/DriveWithJoystickAccel.h>
#include <iostream>
#include <Timer.h>
#include <cmath>

DriveWithJoystickAccel::DriveWithJoystickAccel(int inc)
{
	Requires(drive_train);
	this->inc = inc;
	this->lastTime = Timer::GetFPGATimestamp() * 1000;
}

void DriveWithJoystickAccel::Initialize()
{

}

void DriveWithJoystickAccel::Execute()
{
	double y = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Y);
	double z = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_Z);
	if(!last && oi->GetPilotButton(oi->LOGITECH_EXTREME3D_BUTTON_THUMB)) {
		dir *= -1;
	}
	//double a = oi->GetPilotAxis(oi->LOGITECH_EXTREME3D_AXIS_SLIDER);
	//y = Adjust(y, a);
	//z = Adjust(z, a);
	double time = (Timer::GetFPGATimestamp() * 1000) - lastTime;
	int rightTarget = (y*dir)+z;
	int leftTarget = (-y*dir)+z;

	int left = (leftTarget/abs(leftTarget)) * inc / time;
	int right = (rightTarget/abs(rightTarget)) * inc / time;

	drive_train->SetLeft(left);
	drive_train->SetRight(right);
	last = oi->GetPilotButton(oi->LOGITECH_EXTREME3D_BUTTON_THUMB);
	lastTime = Timer::GetFPGATimestamp() * 1000;
}

bool DriveWithJoystickAccel::IsFinished()
{
	return false;
}

void DriveWithJoystickAccel::End()
{

}

void DriveWithJoystickAccel::Interrupted()
{

}
