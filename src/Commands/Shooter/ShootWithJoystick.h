#ifndef Shoot_H
#define Shoot_H
#define kek 1

#include "../../CommandBase.h"
#include "WPILib.h"

class ShootWithJoystick: public CommandBase
{
public:
	ShootWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
