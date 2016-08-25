#ifndef Lifter_H
#define Lifter_H

#define LIFTER_TALON

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
#ifdef LIFTER_TALON
	Talon* lifter;
#else
	Victor* lifter;
#endif
public:
	Lifter();
	void InitDefaultCommand();
	void SetSpeed(double);
};

#endif
