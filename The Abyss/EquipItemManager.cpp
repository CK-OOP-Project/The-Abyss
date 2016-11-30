#include "stdafx.h"
#include "EquipItemManager.h"

std::shared_ptr<EquipItem> EquipItemManager::GetItem(int level)
{
	std::shared_ptr<EquipItem> item;//¸ô¶óµµ µÇ¿©
	int ran = rand() % 10;//¾ÆÀÌÅÛ °í¸£´Â ·£´ı°ª

	switch (ran)
	{

	case 0:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("¸ñ°Ë"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(9, 5, 5, 5),
			0,EquipType ::Weapon);
		break;

	case 1:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("Ã¼·ÂÀÇ °Ë"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(1, 5, 5, 125),
			0,EquipType::Weapon);
		break;

	case 2:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("ÀúÁÖ¹ŞÀº °Ë"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(200, 5, 5, -300),
			0,EquipType::Weapon);
		break;

	case 3:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("°­Ã¶ÆÒÆ¼"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(0, 5, 5, -10),
			50, EquipType::Body);
		break;

	case 4:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("»ç½½°©¿Ê"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(0, 5, 5, 10),
			20, EquipType::Body);
		break;

	case 5:
			item = std::make_shared<EquipItem>(
				std::make_shared<std::string>("°¡Á×¿Ê"),
				//(int strength, int intelligence, int dexterity, int constitution)
				std::make_shared<Status>(0, 5, 5, 10),
				10, EquipType::Body);
			break;

	case 6:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("±¤Àü»çÀÇ °©¿Ê"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(200, 5, 5, 50),
			-10, EquipType::Body);
			break;
	
	case 7:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("À±±³¼ö´ÔÀÇ °©¿Ê"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(500, 500, 500, 3000),
			5000, EquipType::Body);\
		    break;

	case 8:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("À±±³¼ö´ÔÀÇ ¾È°æ"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(200, 5, 5, 300),
			5000, EquipType::Head);
		break;

	case 9:
		item = std::make_shared<EquipItem>(
			std::make_shared<std::string>("À±°í¼ö´ÔÀÇ Áö½ÃºÀ"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(200000, 5, 5, 500),
			5000, EquipType::Weapon);
		break;
	}

	
	return item;

}
