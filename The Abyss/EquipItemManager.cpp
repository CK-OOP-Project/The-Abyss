#include "stdafx.h"
#include "EquipItemManager.h"

std::shared_ptr<EquipItem> EquipItemManager::GetItem(int level)
{
	std::shared_ptr<EquipItem> item;//���� �ǿ�
	int ran = rand() % 10;//������ ���� ������

	switch (ran)
	{

	case 0:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("���"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(9, 5, 5, 5),
			0,EquipType ::Weapon);
		break;

	case 1:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("ü���� ��"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(1, 5, 5, 125),
			0,EquipType::Weapon);
		break;

	case 2:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("���ֹ��� ��"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(10, 5, 5, -10),
			0,EquipType::Weapon);
		break;

	case 3:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("��ö��Ƽ"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(0, 5, 5, 15),
			50, EquipType::Body);
		break;

	case 4:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("�罽����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(0, 5, 5, 20),
			20, EquipType::Body);
		break;

	case 5:
			item = std::make_shared<EquipItem>(
				std::make_shared<std::string>("���׸���"),
				//(int strength, int intelligence, int dexterity, int constitution)
				std::make_shared<Status>(0, 5, 5, 10),
				10, EquipType::Head);
			break;

	case 6:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("�������� ����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(20, 5, 5, 50),
			-10, EquipType::Body);
			break;
	
	case 7:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("���������� ����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(50, 50, 50, 130),
			5000, EquipType::Body);
		    break;

	case 8:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("���������� �Ȱ�"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(120, 5, 5, 130),
			5000, EquipType::Head);
		break;

	case 9:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("��������� ��"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(120, 5, 5, 50),
			5000, EquipType::Weapon);
		break;
	}

	
	return item;

}
