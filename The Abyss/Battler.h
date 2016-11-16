#pragma once
class Battler
{
public:
	virtual std::shared_ptr<std::string> GetName() = 0;
	virtual void SetName(std::shared_ptr<std::string> value) = 0;

	virtual int GetHP() = 0;
	virtual int GetMP() = 0;
	virtual int GetStrikingPower() = 0;
	virtual int GetDefensivePower() = 0;
	virtual int GetAccuracy() = 0;

	virtual int GetCurrentHP() = 0;
	virtual void SetCurrentHP(int value) = 0;
};

