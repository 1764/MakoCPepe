#ifndef ArmIn_H
#define ArmIn_H

#include "../../CommandBase.h"
#include "WPILib.h"

class ArmIn: public CommandBase
{
public:
	ArmIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
