#include "stdafx.h"
#include "EquipItemManager.h"

std::shared_ptr<EquipItem> EquipItemManager::GetItem(int level)
{
	std::shared_ptr<EquipItem> item;//���� �ǿ�
	int ran = rand() % 1;//������ ���� ������

	switch (ran)
	{

	case 0:

		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(9999, 5, 5, 5),
			0);
		break;
	}
	return item;
}
