#pragma once
#include <memory>
#include "Battler.h"
#include "Status.h"
#include "EquipItem.h"
class PlayerData : public Battler
{
	std::shared_ptr<Status> status = std::make_shared<Status>();
	std::shared_ptr<EquipItem> equipItems[6];
public:
	PlayerData();
	~PlayerData();

	std::shared_ptr<Status> GetStatus() { return status; };

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

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
};

