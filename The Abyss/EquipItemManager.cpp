#include "stdafx.h"
#include "EquipItemManager.h"

std::shared_ptr<EquipItem> EquipItemManager::GetItem(int level)
{
	std::shared_ptr<EquipItem> item;//몰라도 되여
	int ran = rand() % 1;//아이템 고르는 랜덤값

	switch (ran)
	{

	case 0:

		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("딜도"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(9999, 5, 5, 5),
			0);
		break;
	}
	return item;
}
