#ifndef PistonArm_H
#define PistonArm_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class PistonArm: public Subsystem
{
private:
	DoubleSolenoid *arm;
	Victor *vertical;
public:
	PistonArm();
	enum HORIZ_DIRECTION {
				FORWARD,
				BACKWARD,
				HOFF
	};
	enum VERT_DIRECTION {
				UP,
				DOWN,
				VOFF
	};
	void SetVertical(VERT_DIRECTION);
	void SetHorizontal(HORIZ_DIRECTION);
	void InitDefaultCommand();
};

#endif
