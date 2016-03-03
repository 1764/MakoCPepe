#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("Lifter")
{
	lifter = new Talon(vertical_arm_port);
}

void Lifter::InitDefaultCommand()
{
	//SetDefaultCommand(new MySpecialCommand());
}

void Lifter::SetSpeed(double speed)
{
	lifter->Set(speed);
}