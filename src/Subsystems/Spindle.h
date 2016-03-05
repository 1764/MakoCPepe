#ifndef Spindle_H
#define Spindle_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Spindle: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
#ifdef SPINDLE_TALON
	Talon* spindle;
#else
	Victor* spindle;
#endif
public:
	Spindle();
	void SetSpeed(double);
	void InitDefaultCommand();
};

#endif
