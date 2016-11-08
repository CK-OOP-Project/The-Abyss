#pragma once
#include <memory>
class Item
{
	std::shared_ptr<std::string> name;
public:
	Item(std::shared_ptr<std::string> name);
	virtual ~Item();

	std::shared_ptr<std::string> GetName() { return name; };
	void SetName(std::shared_ptr<std::string> value) { this->name = value; };
};

