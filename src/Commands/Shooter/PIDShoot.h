#ifndef PIDShoot_H
#define PIDShoot_H

#include "../../CommandBase.h"
#include "WPILib.h"

class PIDShoot: public CommandBase
{
private:
	double flywheel_speed;
public:
	PIDShoot(double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
