#include "ManipulateArm.h"

ManipulateArm::ManipulateArm()
{
	Requires(piston_arm);
}

// Called just before this Command runs the first time
void ManipulateArm::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ManipulateArm::Execute()
{
	if(oi->GetPilotButton(oi->LOGITECH_F510_BUTTON_LEFT_BUMPER))
		piston_arm->SetHorizontal(piston_arm->FORWARD);
	else if(oi->GetPilotButton(oi->LOGITECH_F510_BUTTON_X))
		piston_arm->SetHorizontal(piston_arm->BACKWARD);
	if(oi->GetPilotButton(oi->LOGITECH_F510_AXIS_LEFT_TRIGGER))
		piston_arm->SetVertical(piston_arm->UP);
	else
		piston_arm->SetVertical(piston_arm->VOFF);

}

// Make this return true when this Command no longer needs to run execute()
bool ManipulateArm::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ManipulateArm::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManipulateArm::Interrupted()
{

}
