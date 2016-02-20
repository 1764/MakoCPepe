#include "OI.h"

OI::OI()
{
	pilot = new Joystick(0);
	copilot = new Joystick(1);

	/*Button *arm_in_button = new JoystickButton(copilot, ),
			*arm_out_button = new JoystickButton(copilot, ),
			*arm_up_button = new JoystickButton(copilot, ),
			*arm_down_button = new JoystickButton(copilot, );*/
	Button *shoot_short_button = new JoystickButton(copilot, 11),
			*shoot_medium_button = new JoystickButton(copilot, 10),
			*shoot_far_button = new JoystickButton(copilot, 9);
	Button *spindle_intake_button = new JoystickButton(copilot, 8);

//	shoot_short_button->WhileHeld(new Shoot(0.3, 0.3));
//	shoot_medium_button->WhileHeld(new Shoot(0.6, 0.6));
//	shoot_far_button->WhileHeld(new Shoot(1,1));
//
//	spindle_intake_button->WhileHeld(new IntakeWithSpindle(0.5));
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

