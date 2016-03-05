#ifndef FlywheelPID_H
#define FlywheelPID_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

#define FLYWHEEL_VICTOR

class FlywheelPID: public PIDSubsystem
{
private:
#ifdef FLYWHEEL_TALON
	Talon *flywheel;
#else
	Victor *flywheel;
#endif
	Encoder *flywheel_encoder;
	PIDController *flywheel_controller;

public:
	FlywheelPID();
	double ReturnPIDInput();
	void SetSpeed(double speed);
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
