#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "OI.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/PistonArm.h"
#include "Subsystems/Shooter.h"
#include "WPILib.h"

class CommandBase: public Command
{
public:
	CommandBase(const std::string &name);
	CommandBase();
	static void init();
	static OI *oi;
	static DriveTrain *drive_train;
	static PistonArm *piston_arm;
	static Shooter *shooter;
};

#endif
