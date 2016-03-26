#include "OI.h"
#include "./Commands/Shooter/PIDShoot.h"
#include "./Commands/Shooter/Shoot.h"
#include "./Commands/Shooter/IntakeWithSpindle.h"
#include "./Commands/PistonArm/ArmIn.h"
#include "./Commands/PistonArm/ArmOut.h"
#include "./Commands/PistonArm/ArmUp.h"
#include "./Commands/PistonArm/ArmDown.h"

OI::OI()
{
	pilot = new Joystick(0);
	copilot = new Joystick(1);
	ultrasonic = new AnalogInput(0);
	shoot_medium_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_B);
	shoot_far_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_A);
	spindle_intake_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_LEFT_BUMPER);
	spindle_out_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_RIGHT_BUMPER);
	arm_in_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_Y);
	arm_out_button = new JoystickButton(copilot, LOGITECH_F510_BUTTON_X);
	arm_up_button = new AnalogButton(-0.5, 1, copilot);
	arm_down_button = new AnalogButton(0.5, 1, copilot);

	shoot_medium_button->WhileHeld(new Shoot(-1));
	shoot_far_button->WhileHeld(new PIDShoot(5000));

	spindle_intake_button->WhileHeld(new IntakeWithSpindle(1));
	spindle_out_button->WhileHeld(new IntakeWithSpindle(-1));

	arm_up_button->WhileHeld(new ArmUp());
	arm_down_button->WhileHeld(new ArmDown());
	arm_in_button->WhileHeld(new ArmIn());
	arm_out_button->WhileHeld(new ArmOut());
}

double OI::GetPilotAxis(int axis)
{
	return pilot->GetRawAxis(axis);
}

bool OI::GetPilotButton(int button)
{
	return pilot->GetRawButton(button);
}

bool OI::GetCopilotButton(int button)
{
	return copilot->GetRawButton(button);
}

double OI::GetCopilotAxis(int axis)
{
	return copilot->GetRawAxis(axis);
}

double OI::GetDistance()
{
	return ultrasonic->GetAverageVoltage()/ULTRASONIC_TO_INCHES_COEFFICIENT;
}

void OI::SetRumble(double amount)
{
	copilot->SetRumble(Joystick::RumbleType::kLeftRumble, amount);
	copilot->SetRumble(Joystick::RumbleType::kRightRumble, amount);
}

