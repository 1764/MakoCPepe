#ifndef Shoot_H
#define Shoot_H

#include "../../CommandBase.h"
#include "WPILib.h"

class Shoot: public CommandBase
{
private:
	double spindle_speed;
	double flywheel_speed;
public:
	Shoot(double,double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
