#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Talon *left_gearbox_front_motor, *right_gearbox_front_motor , *right_gearbox_back_motor, *left_gearbox_back_motor;
public:
	DriveTrain();
	void SetLeft(double);
	void SetRight(double);
	void InitDefaultCommand();
};

#endif
