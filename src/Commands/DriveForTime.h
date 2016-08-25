#ifndef DriveForTime_H
#define DriveForTime_H

#include "../CommandBase.h"
#include "WPILib.h"
#include <Timer.h>

class DriveForTime: public CommandBase
{
private:
	double startTime;
	double endTime;
	double speed;

public:
	DriveForTime(double duration, double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
