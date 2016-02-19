#include "PistonArm.h"
#include "../RobotMap.h"
#include "Commands/PistonArm/ManipulateArm.h"

PistonArm::PistonArm() :
		Subsystem("ExampleSubsystem")
{
	arm = new DoubleSolenoid(solenoid_port_one, solenoid_port_two);
	vertical = new Victor(vertical_arm_port);
}

void PistonArm::SetVertical(VERT_DIRECTION value)
{
	switch(value) {
		case UP:
			vertical->SetSpeed(1);
			break;
		case DOWN:
			vertical->SetSpeed(-1);
			break;
		default:
			vertical->SetSpeed(0);
		}
}

void PistonArm::SetHorizontal(HORIZ_DIRECTION value)
{
	switch(value) {
	case FORWARD:
		arm->Set(arm->kForward);
		break;
	case BACKWARD:
		arm->Set(arm->kReverse);
		break;
	default:
		arm->Set(arm->kOff);
	}
}

void PistonArm::InitDefaultCommand()
{
	SetDefaultCommand(new ManipulateArm());
}
