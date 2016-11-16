#pragma once
#include <memory>
#include "Battler.h"
#include "Status.h"
#include "EquipItem.h"
class PlayerData : public Battler
{
	std::shared_ptr<Status> status;
	std::shared_ptr<EquipItem> equipItems[6];
public:
	PlayerData();
	~PlayerData();

	std::shared_ptr<Status> GetStatus() { return status; };

	virtual std::shared_ptr<std::string> GetName();
	// 아무것도 안하는 놈
	virtual void SetName(std::shared_ptr<std::string> value) {};

	// 체력
	virtual int GetHP();
	// 마력
	virtual int GetMP();
	// 공격력
	virtual int GetStrikingPower();
	// 방어력
	virtual int GetDefensivePower();
	// 회피율
	virtual int GetAccuracy();

	virtual int GetCurrentHP();
	virtual void SetCurrentHP(int value);

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
private:
	int currentHP;
};

