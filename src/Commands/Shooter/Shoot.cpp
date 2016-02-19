#include <Commands/Shooter/Shoot.h>
#include <Subsystems/Flywheel.h>
#include <cstdbool>

Shoot::Shoot(double spindle_speed, double flywheel_speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(flywheel);
	Requires(spindle);
	this->spindle_speed = spindle_speed;
	this->flywheel_speed = flywheel_speed;
}

// Called just before this Command runs the first time
void Shoot::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Shoot::Execute()
{
	flywheel->SetSpeed(flywheel_speed);
	spindle->SetSpeed(spindle_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool Shoot::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Shoot::End()
{
	flywheel->SetSpeed(0);
	spindle->SetSpeed(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Shoot::Interrupted()
{
	flywheel->SetSpeed(0);
	spindle->SetSpeed(0);
}
