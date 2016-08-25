#ifndef DriveWithExponentialJoystick_H
#define DriveWithExponentialJoystick_H
#include "../CommandBase.h"
#include "WPILib.h"

class DriveWithJoystickAccel: public CommandBase
{
private:
	int dir = 1;
	bool last = false;
	int inc;
	double lastTime;
public:
	DriveWithJoystickAccel(int inc);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
