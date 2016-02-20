#include "ArmMove.h"

ArmMove::ArmMove(ARM_DIR dir)
{
	Requires(piston_arm);
	this->dir = dir;
}

// Called just before this Command runs the first time
void ArmMove::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArmMove::Execute()
{
	switch(this->dir) {
	case IN:
		piston_arm->SetHorizontal(piston_arm->BACKWARD);
		break;
	case OUT:
		piston_arm->SetHorizontal(piston_arm->FORWARD);
		break;
	case UP:
		piston_arm->SetVertical(piston_arm->UP);
		break;
	case DOWN:
		piston_arm->SetVertical(piston_arm->DOWN);
		break;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ArmMove::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArmMove::End()
{
	switch(this->dir) {
	case IN:
	case OUT:
		piston_arm->SetHorizontal(piston_arm->HOFF);
		break;
	case UP:
	case DOWN:
		piston_arm->SetVertical(piston_arm->VOFF);
		break;
	}
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmMove::Interrupted()
{

}
