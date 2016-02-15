#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	Talon *spindle, *shooter;
public:
	Shooter();
	void SetSpindleSpeed(double);
	void SetShooterSpeed(double);
	void InitDefaultCommand();
};

#endif
