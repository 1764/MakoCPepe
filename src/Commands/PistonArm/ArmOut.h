#ifndef ArmOut_H
#define ArmOut_H

#include "../../CommandBase.h"
#include "WPILib.h"

class ArmOut: public CommandBase
{
public:
	ArmOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
