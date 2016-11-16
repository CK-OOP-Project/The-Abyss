#pragma once
#include "Monster.h"
class MonsterManager
{
public:
	static std::shared_ptr<Monster> GetMonster(int level);
};

