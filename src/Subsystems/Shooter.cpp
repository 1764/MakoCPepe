#include "Shooter.h"
#include "../RobotMap.h"
#include "Commands/Shoot.h"

Shooter::Shooter() :
		Subsystem("ExampleSubsystem")
{
	spindle = new Talon(spindle_port);
	shooter = new Talon(shooter_port);
}

void Shooter::SetSpindleSpeed(double speed)
{
	spindle->Set(speed);
}

void Shooter::SetShooterSpeed(double speed)
{
	shooter->Set(speed);
}

void Shooter::InitDefaultCommand()
{
	SetDefaultCommand(new Shoot());
}
