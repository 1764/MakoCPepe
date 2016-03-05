#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "OI.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Piston.h"
#include "Subsystems/Lifter.h"
#include "Subsystems/Spindle.h"
#include "Subsystems/FlywheelPID.h"
#include "WPILib.h"

class CommandBase: public Command
{
public:
	CommandBase(const std::string &name);
	CommandBase();
	static void init();
	static OI *oi;
	static DriveTrain *drive_train;
	static Spindle *spindle;
	static Piston *piston;
	static Lifter *lifter;
	static FlywheelPID *flywheel;
};

#endif
