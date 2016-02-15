#ifndef PistonArm_H
#define PistonArm_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class PistonArm: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	PistonArm();
	void InitDefaultCommand();
};

#endif
