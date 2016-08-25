#ifndef Autonomous_H
#define Autonomous_H

#include "Commands/CommandGroup.h"
#include "Commands/Shooter/PIDShoot.h"
#include "Commands/PutAtDistance.h"
#include "WPILib.h"

class Autonomous: public CommandGroup
{
public:
	Autonomous();
};

#endif
