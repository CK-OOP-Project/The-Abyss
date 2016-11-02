#pragma once
#include "stdafx.h"
class Item
{
	std::shared_ptr<std::string> name;
public:
	Item(std::shared_ptr<std::string> name);
	virtual ~Item();

	std::shared_ptr<std::string> GetName() { return name; };
};

