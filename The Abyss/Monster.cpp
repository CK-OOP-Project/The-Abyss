#include "stdafx.h"
#include "Monster.h"


Monster::Monster()
{
}


Monster::~Monster()
{
}

std::shared_ptr<std::string> Monster::GetName()
{
	return std::shared_ptr<std::string>();
}

std::shared_ptr<std::string> Monster::SetName()
{
	return std::shared_ptr<std::string>();
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
