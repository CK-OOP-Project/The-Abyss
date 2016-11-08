#pragma once
#include "Item.h"
enum class EquipType
{
	Weapon,
	Shield,
	Head,
	Body,
	Necklace,
	Accessory
};
class EquipItem :
	public Item
{
public:
	EquipItem(std::shared_ptr<std::string> name);
	virtual ~EquipItem();

	EquipType GetEquipType() { return this->equipType; };

private:
	EquipType equipType;
};

