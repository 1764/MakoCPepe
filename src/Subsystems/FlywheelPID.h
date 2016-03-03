#ifndef FlywheelPID_H
#define FlywheelPID_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class FlywheelPID: public PIDSubsystem
{
private:
	Talon *flywheel;
	Encoder *flywheel_encoder;
	PIDController *flywheel_controller;

public:
	FlywheelPID();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
