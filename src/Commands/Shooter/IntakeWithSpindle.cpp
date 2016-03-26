#include "IntakeWithSpindle.h"

IntakeWithSpindle::IntakeWithSpindle(double speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(spindle);
	Requires(ballSensor);
	this->speed = speed;
}

// Called just before this Command runs the first time
void IntakeWithSpindle::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeWithSpindle::Execute()
{
	spindle->SetSpeed(speed);
	if(ballSensor->isActivated())
	{
		oi->SetRumble(1.0);
	}
	else
	{
		oi->SetRumble(0.0);
	}
	//spindle->SetSetpoint(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeWithSpindle::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeWithSpindle::End()
{
	spindle->SetSpeed(0);
	//spindle->SetSetpoint(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeWithSpindle::Interrupted()
{
	spindle->SetSpeed(0);
	//spindle->SetSetpoint(0);
}
