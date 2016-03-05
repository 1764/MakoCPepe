#include "FlywheelPID.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

FlywheelPID::FlywheelPID() :
		PIDSubsystem("FlywheelPID", 0.0002, 0.00002, 0.00001, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	flywheel_encoder = new Encoder(flywheel_encoder_port_one, flywheel_encoder_port_two);

#ifdef FLYWHEEL_TALON
	flywheel = new Talon(flywheel_port);
#else
	flywheel = new Victor(flywheel_port);
#endif
}

double FlywheelPID::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return flywheel_encoder->GetRate();
}

void FlywheelPID::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	std::cout << "Setting PID " << output << std::endl;
	flywheel->Set(-output);
}

void FlywheelPID::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
