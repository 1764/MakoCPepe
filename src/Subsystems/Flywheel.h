#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Flywheel: public Subsystem
{
private:
	Talon *flywheel;
public:
	Flywheel();
	void SetSpeed(double);
	void InitDefaultCommand();
};

#endif
