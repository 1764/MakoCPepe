#include "BallSensor.h"
#include "../RobotMap.h"
#include "../Commands/CheckBall.h"

BallSensor::BallSensor() :
		Subsystem("ExampleSubsystem")
{
	this->limitSwitch = new DigitalInput(ball_sensor_port);
}

bool BallSensor::isActivated()
{
	return limitSwitch->Get();
}

void BallSensor::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new CheckBall());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
