#include "CheckBall.h"

CheckBall::CheckBall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballSensor);
}

// Called just before this Command runs the first time
void CheckBall::Initialize()
{
	oi->SetRumble(0.0);
}

// Called repeatedly when this Command is scheduled to run
void CheckBall::Execute()
{
	if(!ballSensor->isActivated())
	{
		oi->SetRumble(1.0);
	}
	else
	{
		oi->SetRumble(0.0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CheckBall::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void CheckBall::End()
{
	oi->SetRumble(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CheckBall::Interrupted()
{
	oi->SetRumble(0.0);
}
