#include "CommandBase.h"
#include "Commands/Scheduler.h"

OI *CommandBase::oi = NULL;
DriveTrain *CommandBase::drive_train = NULL;
PistonArm *CommandBase::piston_arm = NULL;
Flywheel *CommandBase::flywheel = NULL;
Spindle *CommandBase::spindle = NULL;

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
	oi = new OI();
	drive_train = new DriveTrain();
	//piston_arm = new PistonArm();
	flywheel = new Flywheel();
	spindle = new Spindle();
}
