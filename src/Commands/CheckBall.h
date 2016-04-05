#ifndef CheckBall_H
#define CheckBall_H

#include "../CommandBase.h"
#include "WPILib.h"

class CheckBall: public CommandBase
{
public:
	CheckBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
