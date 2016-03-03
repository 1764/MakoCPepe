#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	Talon* lifter;
public:
	Lifter();
	void InitDefaultCommand();
	void SetSpeed(double);
};

#endif
