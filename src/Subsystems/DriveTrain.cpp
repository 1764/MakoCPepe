#include <Commands/DriveWithJoystick.h>
#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{
	left_gearbox_front_motor = new Talon(front_left_motor_port);
  	left_gearbox_back_motor = new Talon(back_left_motor_port);

  	right_gearbox_front_motor = new Talon(front_right_motor_port);
  	right_gearbox_back_motor = new Talon(back_right_motor_port);
}

void DriveTrain::SetRight(double val) {
	right_gearbox_front_motor->Set(val);
	right_gearbox_back_motor->Set(val);
}

void DriveTrain::SetLeft(double val) {
	left_gearbox_back_motor->Set(val);
	left_gearbox_front_motor->Set(val);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithExponentialJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
