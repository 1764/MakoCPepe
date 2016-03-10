#ifndef DriveTrain_H
#define DriveTrain_H
#define CHASSIS_VICTOR
#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Victor *left_gearbox_front_motor, *right_gearbox_front_motor , *right_gearbox_back_motor, *left_gearbox_back_motor;
public:
	DriveTrain();
	void SetLeft(double);
	void SetRight(double);
	void InitDefaultCommand();
};

#endif
