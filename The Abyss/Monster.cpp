#include "stdafx.h"
#include "Monster.h"


Monster::Monster()
{
}


Monster::~Monster()
{
}

int Monster::GetHP()
{
	return status->constitution;
}

int Monster::GetMP()
{
	return status->intelligence;
}

int Monster::GetStrikingPower()
{
	return status->strength;
}

int Monster::GetDefensivePower()
{
	return defensivePower;
}

int Monster::GetAccuracy()
{
	return status->dexterity;
}
