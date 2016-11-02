#include "stdafx.h"
#include "Item.h"


Item::Item(std::shared_ptr<std::string> name)
{
	this->name = name;
}


Item::~Item()
{
}
