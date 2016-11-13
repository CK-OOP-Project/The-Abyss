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

	// ü��
	virtual int GetHP();
	// ����
	virtual int GetMP();
	// ���ݷ�
	virtual int GetStrikingPower();
	// ����
	virtual int GetDefensivePower();
	// ȸ����
	virtual int GetAccuracy();

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
};

