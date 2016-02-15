#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Talon *left_motor, *right_motor;
public:
	DriveTrain();
	void Set(double, double);
	void InitDefaultCommand();
};

#endif
