#include "CommandBase.h"
#include "Commands/Scheduler.h"

OI *CommandBase::oi = NULL;
DriveTrain *CommandBase::drive_train = NULL;
PistonArm *CommandBase::piston_arm = NULL;
Shooter *CommandBase::shooter = NULL;

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
	piston_arm = new PistonArm();
	shooter = new Shooter();
}
