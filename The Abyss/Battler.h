#pragma once
class Battler
{
public:
	Battler();
	virtual ~Battler();

	virtual int GetHP();
	virtual int GetMP();
	virtual int GetStrikingPower();
	virtual int GetDefensivePower();
	virtual int GetAccuracy();
};

