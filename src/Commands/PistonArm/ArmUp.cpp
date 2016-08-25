#include "ArmUp.h"

ArmUp::ArmUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis)
	Requires(lifter);
}

// Called just before this Command runs the first time
void ArmUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArmUp::Execute()
{
	lifter->SetSpeed(1);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmUp::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArmUp::End()
{
	lifter->SetSpeed(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmUp::Interrupted()
{
	lifter->SetSpeed(0);
}
