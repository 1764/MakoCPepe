#include "CommandBase.h"
#include "Commands/Scheduler.h"

OI *CommandBase::oi = NULL;
DriveTrain *CommandBase::drive_train = NULL;
Piston *CommandBase::piston = NULL;
Lifter *CommandBase::lifter = NULL;
FlywheelPID *CommandBase::flywheel = NULL;
Spindle *CommandBase::spindle = NULL;
BallSensor *CommandBase::ballSensor = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	drive_train = new DriveTrain();
	piston = new Piston();
	lifter = new Lifter();
	flywheel = new FlywheelPID();
	spindle = new Spindle();
	ballSensor = new BallSensor();
	oi = new OI();
}
