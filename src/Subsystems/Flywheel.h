#ifndef Shooter_H
#define Shooter_H

#define FLYWHEEL_VICTOR

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Flywheel: public Subsystem
{
private:
#ifdef FLYWHEEL_TALON
	Talon *flywheel;
#else
	Victor *flywheel;
#endif
public:
	Flywheel();
	void SetSpeed(double);
	void InitDefaultCommand();
};

#endif
