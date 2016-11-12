#pragma once
#include <memory>
#include "Status.h"
class Monster
{
	std::shared_ptr<Status> status;
	int defensivePower;
public:
	Monster();
	virtual ~Monster();

	std::shared_ptr<Status> GetStatus() { return status; };

	int GetHP();
	int GetMP();
	int GetStrikingPower();
	int GetDefensivePower();
	int GetAccuracy();
};

