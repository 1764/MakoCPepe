#ifndef ArmMove_H
#define ArmMove_H

#include "../../CommandBase.h"
#include "WPILib.h"

class ArmMove: public CommandBase
{
public:
	enum ARM_DIR{
		IN,
		OUT,
		DOWN,
		UP
	};
	ArmMove(ARM_DIR);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	ARM_DIR dir;
};

#endif
