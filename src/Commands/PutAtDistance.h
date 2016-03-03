#ifndef PutAtDistance_H
#define PutAtDistance_H

#include "../CommandBase.h"
#include "WPILib.h"

class PutAtDistance: public CommandBase
{
private:
	double minimum_distance, maximum_distance, actual_distance;

public:
	PutAtDistance();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
