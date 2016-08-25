#include "PutAtDistance.h"

PutAtDistance::PutAtDistance()
{
	Requires(drive_train);

	minimum_distance = 20;
	maximum_distance = 30;
	actual_distance = 0;
}

// Called just before this Command runs the first time
void PutAtDistance::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PutAtDistance::Execute()
{
	actual_distance = oi->GetDistance();
	if(actual_distance < minimum_distance){
		drive_train->SetLeft(-1);
		drive_train->SetRight(1);
	}else if(actual_distance > maximum_distance){
		drive_train->SetLeft(1);
		drive_train->SetRight(-1);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool PutAtDistance::IsFinished()
{
	if(actual_distance > minimum_distance && actual_distance < maximum_distance){
		return true;
	}else{
		return false;
	}
}

// Called once after isFinished returns true
void PutAtDistance::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PutAtDistance::Interrupted()
{

}
