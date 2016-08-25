#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("Lifter")
{
#ifdef LIFTER_TALON
	lifter = new Talon(vertical_arm_port);
#else
	lifter = new Victor(vertical_arm_port);
#endif
}

void Lifter::InitDefaultCommand()
{
	//SetDefaultCommand(new MySpecialCommand());
}

void Lifter::SetSpeed(double speed)
{
	lifter->Set(speed);
}
