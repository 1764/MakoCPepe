#include "PIDShoot.h"

PIDShoot::PIDShoot(double flywheel_speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(flywheel);
	this->flywheel_speed = flywheel_speed;
}

// Called just before this Command runs the first time
void PIDShoot::Initialize()
{
	flywheel->Enable();
}

// Called repeatedly when this Command is scheduled to run
void PIDShoot::Execute()
{
	std::cout << flywheel_speed << ':' << flywheel->ReturnPIDInput() << std::endl;
	flywheel->SetSetpoint(flywheel_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool PIDShoot::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PIDShoot::End()
{
	flywheel->SetSetpoint(0);
	flywheel->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDShoot::Interrupted()
{
	flywheel->SetSetpoint(0);
	flywheel->Disable();
}
