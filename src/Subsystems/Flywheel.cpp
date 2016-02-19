#include <Commands/Shooter/ShootWithJoystick.h>
#include <RobotMap.h>
#include <Subsystems/Flywheel.h>
#include <Talon.h>

Flywheel::Flywheel() :
		Subsystem("ExampleSubsystem")
{
	flywheel = new Talon(shooter_port);
}

void Flywheel::SetSpeed(double speed)
{
	flywheel->Set(speed);
}

void Flywheel::InitDefaultCommand()
{
	//SetDefaultCommand(new ShootWithJoystick());
}
