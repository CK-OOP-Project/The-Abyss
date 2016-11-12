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

	// ü��
	int GetHP();
	// ����
	int GetMP();
	// ���ݷ�
	int GetStrikingPower();
	// ����
	int GetDefensivePower();
	// ȸ����
	int GetAccuracy();

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
};

