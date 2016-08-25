#ifndef BallSensor_H
#define BallSensor_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallSensor: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DigitalInput* limitSwitch;
public:
	BallSensor();
	void InitDefaultCommand();
	bool isActivated();
};

#endif
