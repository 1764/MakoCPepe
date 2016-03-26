#include "DriveForTime.h"
#include "../CommandBase.h"

DriveForTime::DriveForTime(double duration, double speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(drive_train);
	this->startTime = Timer::GetFPGATimestamp();
	this->endTime = startTime + duration;
	this->speed = speed;
}

// Called just before this Command runs the first time
void DriveForTime::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveForTime::Execute()
{
	drive_train->SetLeft(-speed);
	drive_train->SetRight(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForTime::IsFinished()
{
	return (Timer::GetFPGATimestamp() >= endTime);
}

// Called once after isFinished returns true
void DriveForTime::End()
{
	drive_train->SetLeft(0);
	drive_train->SetRight(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForTime::Interrupted()
{

}
