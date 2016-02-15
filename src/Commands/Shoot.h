#ifndef Shoot_H
#define Shoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class Shoot: public CommandBase
{
private:
	double x, y;
public:
	Shoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
