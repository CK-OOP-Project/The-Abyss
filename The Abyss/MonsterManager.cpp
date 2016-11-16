#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	int ran = rand();//몬스터 고르는 랜덤값
	std::shared_ptr<Monster> monster;//몰라도 되여
	
	monster = std::make_shared<Monster>(
		std::make_shared<std::string>("해골 병사"),
		//(int strength, int intelligence, int dexterity, int constitution)
		std::make_shared<Status>(5, 5, 5, 5),
		0);
/*
	std::make_shared<Monster>(
		std::make_shared<std::string>("어둠의 해골 병사"),
		std::make_shared<Status>(12, 12, 12, 12),
		0);
	
	std::make_shared<Monster>(
		std::make_shared<std::string>("걸어다니는 해골"),
		std::make_shared<Status>(3, 3, 3, 3),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("어둠의 치킨 병사"),
		std::make_shared<Status>(30, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("치킨 병사"),
		std::make_shared<Status>(15, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("걸어다니는 치킨"),
		std::make_shared<Status>(10, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("길잃은 영혼"),
		std::make_shared<Status>(1, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("영혼 병사"),
		std::make_shared<Status>(3, 10, 3, 3),
		0);
	
	std::make_shared<Monster>(
		std::make_shared<std::string>("어둠의 영혼 병사"),
		std::make_shared<Status>(5, 15, 5, 5),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("슬픈 고블린"),
		std::make_shared<Status>(1, 0, 0, 0),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("명탐정 고블린"),
		std::make_shared<Status>(15, 40, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("기쁜 고블린"),
		std::make_shared<Status>(2, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("건강한 고블린"),
		std::make_shared<Status>(60, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("야근한 고블린"),
		std::make_shared<Status>(15, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("백수 고블린"),
		std::make_shared<Status>(30, 1, 30, 30),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("도플갱어"),
		std::make_shared<Status>(30, 1, 1, 1),
		0);*/


	return monster;
}
