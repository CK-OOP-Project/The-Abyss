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
	// �ƹ��͵� ���ϴ� ��
	virtual void SetName(std::shared_ptr<std::string> value) {};

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

	virtual int GetCurrentHP();
	virtual void SetCurrentHP(int value);

	std::shared_ptr<EquipItem> GetEquipItem(EquipType equipType) { return equipItems[(int)equipType]; };
private:
	int currentHP;
};

