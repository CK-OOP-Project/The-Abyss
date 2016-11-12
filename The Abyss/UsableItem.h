#pragma once
#include "Item.h"
class UsableItem :
	public Item
{
public:
	UsableItem(std::shared_ptr<std::string> name);
	virtual ~UsableItem();
};

