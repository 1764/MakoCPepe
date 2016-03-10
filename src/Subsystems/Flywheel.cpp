#include <RobotMap.h>
#include <Subsystems/Flywheel.h>

Flywheel::Flywheel() :
		Subsystem("ExampleSubsystem")
{
	flywheel = new Victor(flywheel_port);
}

void Flywheel::SetSpeed(double speed)
{
	flywheel->Set(speed);
}

void Flywheel::InitDefaultCommand()
{
	//SetDefaultCommand(new ShootWithJoystick());
}
