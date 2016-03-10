#ifndef Lifter_H
#define Lifter_H

#define LIFTER_VICTOR

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	Victor* lifter;
public:
	Lifter();
	void InitDefaultCommand();
	void SetSpeed(double);
};

#endif
