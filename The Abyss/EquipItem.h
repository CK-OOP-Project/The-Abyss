#pragma once
#include <memory>
#include "Item.h"
#include "Status.h"
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
	std::shared_ptr<Status> GetProperty() { return this->property; };
	int GetDefensivePower() { return this->defensivePower; };

private:
	EquipType equipType;
	std::shared_ptr<Status> property;
	int defensivePower;
};

