#pragma once
#include "stdafx.h"
#include "Stat.h"
class PlayerData
{
	std::shared_ptr<Stat> stat;
public:
	PlayerData();
	~PlayerData();

	std::shared_ptr<Stat> GetStat() { return stat; };
};

