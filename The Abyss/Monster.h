#pragma once
#include <memory>
#include "Battler.h"
#include "Status.h"
class Monster : public Battler
{
public:
	Monster(std::shared_ptr<std::string> name, std::shared_ptr<Status> status, int defensivePower);
	virtual ~Monster();

	std::shared_ptr<Status> GetStatus() { return status; };
	virtual std::shared_ptr<std::string> GetName() { return name; };
	virtual void SetName(std::shared_ptr<std::string> value) { this->name = value; };

	virtual int GetHP();
	virtual int GetMP();
	virtual int GetStrikingPower();
	virtual int GetDefensivePower();
	virtual int GetAccuracy();
private:
	std::shared_ptr<std::string> name;
	std::shared_ptr<Status> status;
	int defensivePower;
};

