#include <Commands/DriveWithJoystick.h>
#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
#ifdef CHASSIS_TALON
	left_gearbox_front_motor = new Talon(left_gearbox_front_motor_port);
  	left_gearbox_back_motor = new Talon(left_gearbox_back_motor_port);

  	right_gearbox_front_motor = new Talon(right_gearbox_front_motor_port);
  	right_gearbox_back_motor = new Talon(right_gearbox_back_motor_port);
#endif

#ifdef CHASSIS_VICTOR
  	left_gearbox_front_motor = new Victor(left_gearbox_front_motor_port);
	left_gearbox_back_motor = new Victor(left_gearbox_back_motor_port);

	right_gearbox_front_motor = new Victor(right_gearbox_front_motor_port);
	right_gearbox_back_motor = new Victor(right_gearbox_back_motor_port);
#endif

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
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
