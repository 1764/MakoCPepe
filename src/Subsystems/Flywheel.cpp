#include <RobotMap.h>
#include <Subsystems/Flywheel.h>

Flywheel::Flywheel() :
		Subsystem("ExampleSubsystem")
{
#ifdef FLYWHEEL_TALON
	flywheel = new Talon(flywheel_port);
#endif
#ifdef FLYWHEEL_VICTOR
	flywheel = new Victor(flywheel_port);
#endif
}

void Flywheel::SetSpeed(double speed)
{
	flywheel->Set(speed);
}

void Flywheel::InitDefaultCommand()
{
	//SetDefaultCommand(new ShootWithJoystick());
}
