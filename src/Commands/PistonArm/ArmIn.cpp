#include "ArmIn.h"

ArmIn::ArmIn()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(piston);
}

// Called just before this Command runs the first time
void ArmIn::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArmIn::Execute()
{
	piston->SetDirection(DoubleSolenoid::Value::kReverse);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmIn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArmIn::End()
{
	piston->SetDirection(DoubleSolenoid::Value::kOff);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmIn::Interrupted()
{
	piston->SetDirection(DoubleSolenoid::Value::kOff);
}
