#pragma once
#include "EquipItem.h"
class EquipItemManager
{
public:
	static std::shared_ptr<EquipItem> GetItem(int level);
};

