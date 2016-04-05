#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "util/AnalogButton.h"

class OI
{
private:
	Joystick *pilot, *copilot;
	Button *shoot_short_button, *shoot_medium_button, *shoot_far_button, *spindle_out_button, *flywheel_button;
	Button *spindle_intake_button, *trigger, *arm_in_button, *arm_out_button;
	Button *arm_up_button, * arm_down_button;
	AnalogInput *ultrasonic;
public:
	OI();
	double GetPilotAxis(int);
	bool GetPilotButton(int);
	bool GetCopilotButton(int);
	double GetCopilotAxis(int);
	double GetDistance();
	void SetRumble(double amount);

	enum RumblePattern {
		FAST_PULSE,
		SLOW_PULSE,

	};

	const int LOGITECH_EXTREME3D_AXIS_X = 0;
	const int LOGITECH_EXTREME3D_AXIS_Y = 1;
	const int LOGITECH_EXTREME3D_AXIS_Z = 2;
	const int LOGITECH_EXTREME3D_AXIS_SLIDER = 3;
	const int LOGITECH_EXTREME3D_BUTTON_TRIGGER = 1;
	const int LOGITECH_EXTREME3D_BUTTON_THUMB = 2;

	const int LOGITECH_F510_AXIS_LEFT_STICK_X = 0;
	const int LOGITECH_F510_AXIS_LEFT_STICK_Y = 1;
	const int LOGITECH_F510_AXIS_RIGHT_STICK_X = 4;
	const int LOGITECH_F510_AXIS_RIGHT_STICK_Y = 5;
	const int LOGITECH_F510_AXIS_LEFT_TRIGGER = 2;
	const int LOGITECH_F510_AXIS_RIGHT_TRIGGER = 3;
	const int LOGITECH_F510_BUTTON_A = 1;
	const int LOGITECH_F510_BUTTON_B = 2;
	const int LOGITECH_F510_BUTTON_X = 3;
	const int LOGITECH_F510_BUTTON_Y = 4;
	const int LOGITECH_F510_BUTTON_LEFT_BUMPER = 5;
	const int LOGITECH_F510_BUTTON_RIGHT_BUMPER = 6;
	const int LOGITECH_F510_BUTTON_BACK = 7;
	const int LOGITECH_F510_BUTTON_SELECT = 8;
	const int LOGITECH_F510_BUTTON_LEFT_CLICK = 9;
	const int LOGITECH_F510_BUTTON_RIGHT_CLICK = 10;
	const double ULTRASONIC_TO_INCHES_COEFFICIENT = 0.009765625;
};

#endif
