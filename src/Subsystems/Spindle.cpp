#include "Spindle.h"
#include "../RobotMap.h"
#include <Talon.h>

Spindle::Spindle() :
		Subsystem("Spindle")
{
	spindle = new Victor(spindle_port);
}

void Spindle::SetSpeed(double speed) {
	spindle->SetSpeed(speed);

}

void Spindle::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
