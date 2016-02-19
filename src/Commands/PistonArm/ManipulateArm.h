#ifndef ManipulateArm_H
#define ManipulateArm_H

#include "../../CommandBase.h"
#include "WPILib.h"

class ManipulateArm: public CommandBase
{
public:
	ManipulateArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
