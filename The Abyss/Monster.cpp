#include "stdafx.h"
#include "Monster.h"


Monster::Monster(std::shared_ptr<std::string> name, std::shared_ptr<Status> status, int defensivePower)
	: name(name),status(status),defensivePower(defensivePower)
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


int Monster::GetCurrentHP()
{
	if (currentHP > GetHP())
		currentHP = GetHP();
	return currentHP;
}

void Monster::SetCurrentHP(int value)
{
	if (value > GetHP())
		value = GetHP();
	currentHP = value;
}