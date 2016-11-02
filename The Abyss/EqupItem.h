#pragma once
#include "Item.h"
class EqupItem :
	public Item
{
public:
	EqupItem(std::shared_ptr<std::string> name);
	virtual ~EqupItem();
};

