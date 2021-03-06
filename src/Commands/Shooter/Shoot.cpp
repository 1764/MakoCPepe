#include "Shoot.h"

Shoot::Shoot(double flywheel_speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(flywheel);
	this->flywheel_speed = flywheel_speed;
}

// Called just before this Command runs the first time
void Shoot::Initialize()
{
}

// Called repeatedly when this Command is scheduled to run
void Shoot::Execute()
{
	flywheel->UsePIDOutput(flywheel_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool Shoot::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Shoot::End()
{
	flywheel->UsePIDOutput(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Shoot::Interrupted()
{
	flywheel->UsePIDOutput(0);
}
