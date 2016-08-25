#ifndef IntakeWithSpindle_H
#define IntakeWithSpindle_H

#include "../../CommandBase.h"
#include "WPILib.h"

class IntakeWithSpindle: public CommandBase
{
private:
	double speed;
public:
	IntakeWithSpindle(double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
