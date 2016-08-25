#ifndef DriveWithExponentialJoystick_H
#define DriveWithExponentialJoystick_H
#include "../CommandBase.h"
#include "WPILib.h"

class DriveWithJoystick: public CommandBase
{
private:
	int dir = 1;
	bool last = false;
public:
	DriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
