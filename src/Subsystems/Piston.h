#ifndef Piston_H
#define Piston_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Piston: public Subsystem
{
private:
	DoubleSolenoid* arm;
public:
	Piston();
	void InitDefaultCommand();
	void SetDirection(DoubleSolenoid::Value);
};

#endif
