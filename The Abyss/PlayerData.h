#pragma once
#include <memory>
#include "Status.h"
#include "EquipItem.h"
class PlayerData
{
	std::shared_ptr<Status> status;
	std::shared_ptr<EquipItem> equipItems[6];
public:
	PlayerData();
	~PlayerData();

	std::shared_ptr<Status> GetStatus() { return status; };

	// 체력
	int GetHP();
	// 마력
	int GetMP();
	// 공격력
	int GetStrikingPower();
	// 방어력
	int GetDefensivePower();
	// 회피율
	int GetAccuracy();

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
};

