#pragma once
class Battler
{
public:
	virtual std::shared_ptr<std::string> GetName() = 0;
	virtual std::shared_ptr<std::string> SetName() = 0;

	virtual int GetHP() = 0;
	virtual int GetMP() = 0;
	virtual int GetStrikingPower() = 0;
	virtual int GetDefensivePower() = 0;
	virtual int GetAccuracy() = 0;
};

