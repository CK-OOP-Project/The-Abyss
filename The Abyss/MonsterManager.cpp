#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	int ran = rand();
	std::shared_ptr<Monster> monster;
	
	monster = std::make_shared<Monster>(
		std::make_shared<std::string>("ÇØ°ñ º´»ç"),
		std::make_shared<Status>(5, 5, 5, 5),
		0);
	
	return monster;
}
