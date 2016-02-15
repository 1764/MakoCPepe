#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/DriveWithExponentialJoystick.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{
	left_motor = new Talon(left_motor_port);
	right_motor = new Talon(right_motor_port);
}

void DriveTrain::Set(double y, double z)
{
	left_motor->Set(-y+z);
	right_motor->Set(y+z);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithExponentialJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
