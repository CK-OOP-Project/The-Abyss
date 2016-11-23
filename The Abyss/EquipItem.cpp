#include "stdafx.h"
#include "EquipItem.h"


EquipItem::EquipItem(std::shared_ptr<std::string> name, std::shared_ptr<Status> property, int defensivePower)
	:Item(name), property(property), defensivePower(defensivePower)
{
}


EquipItem::~EquipItem()
{
}
