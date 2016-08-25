#include "Piston.h"
#include "../RobotMap.h"

Piston::Piston() :
		Subsystem("Piston")
{
	arm = new DoubleSolenoid(solenoid_port_one, solenoid_port_two);
}

void Piston::InitDefaultCommand()
{
	//SetDefaultCommand(new MySpecialCommand());
}


void Piston::SetDirection(DoubleSolenoid::Value dir)
{
	arm->Set(dir);
}
