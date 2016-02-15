#ifndef DriveWithExponentialJoystick_H
#define DriveWithExponentialJoystick_H
#include <cmath>
#include "../CommandBase.h"
#include "WPILib.h"

class DriveWithExponentialJoystick: public CommandBase
{
public:
	DriveWithExponentialJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	double Adjust(double, double);
};

#endif
