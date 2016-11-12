#include "stdafx.h"
#include "PlayerData.h"


PlayerData::PlayerData()
{
	this->status = std::make_shared<Status>();
}


PlayerData::~PlayerData()
{
}

int PlayerData::GetHP()
{
	int result = this->GetStatus()->constitution;
	for (int i = 0; i < 6; i++)
	{
		result += this->equipItems[i]->GetProperty()->constitution;
	}
	return result;
}

int PlayerData::GetMP()
{
	int result = this->GetStatus()->intelligence;
	for (int i = 0; i < 6; i++)
	{
		result += this->equipItems[i]->GetProperty()->intelligence;
	}
	return result;
}

int PlayerData::GetStrikingPower()
{
	int result = this->GetStatus()->intelligence;
	for (int i = 0; i < 6; i++)
	{
		result += this->equipItems[i]->GetProperty()->strength;
	}
	return result;
}

int PlayerData::GetDefensivePower()
{
	int result = 0;
	for (int i = 0; i < 6; i++)
	{
		result = this->equipItems[i]->GetDefensivePower();
	}
	return result;
}

int PlayerData::GetAccuracy()
{
	int result = this->GetStatus()->dexterity;
	for (int i = 0; i < 6; i++)
	{
		result += this->equipItems[i]->GetProperty()->dexterity;
	}
	return result;
}
