#include "Shoot.h"

Shoot::Shoot()
{
	Requires(shooter);
}

void Shoot::Initialize()
{

}

void Shoot::Execute()
{
	if(oi->GetPilotButton(6))
		x++;
	if(oi->GetPilotButton(7))
		x--;
	if(oi->GetPilotButton(11))
		y++;
	if(oi->GetPilotButton(10))
		y--;
	shooter->SetShooterSpeed(x);
	shooter->SetSpindleSpeed(y);
}

bool Shoot::IsFinished()
{
	return false;
}

void Shoot::End()
{

}

void Shoot::Interrupted()
{

}
