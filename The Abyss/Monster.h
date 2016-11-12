#pragma once
#include <memory>
#include "Battler.h"
#include "Status.h"
class Monster : public Battler
{
	std::shared_ptr<Status> status;
	int defensivePower;
public:
	Monster();
	virtual ~Monster();

	std::shared_ptr<Status> GetStatus() { return status; };

	virtual int GetHP();
	virtual int GetMP();
	virtual int GetStrikingPower();
	virtual int GetDefensivePower();
	virtual int GetAccuracy();
};

