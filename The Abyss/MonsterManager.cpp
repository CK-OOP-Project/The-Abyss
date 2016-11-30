#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	std::shared_ptr<Monster> monster;//몰라도 되여
	int ran = rand()%20;//몬스터 고르는 랜덤값
	
	switch (ran) {

	case 0:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("해골 병사"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(3, 5, 5, 5),
			0);
		break;
	case 1:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("어둠의 해골 병사"),
			std::make_shared<Status>(3, 12, 12, 52),
			0);
		break;
	case 2:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("걸어다니는 별가사리"),
			std::make_shared<Status>(3, 3, 3, 50),
			0);
		break;
	case 3:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("어둠의 해초범벅"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 4:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("살아 숨쉬는 조별과제"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 5:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("거 울 (유어 페이스)"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 6:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("과제하다 죽은 영혼"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 7:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("저장된 팀 프로젝트가 날라간 3학년"),
			std::make_shared<Status>(3, 100, 3, 50),
			0);
		break;
	case 8:
		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("담배를 못끊는 아저씨"),
			std::make_shared<Status>(3, 15, 5, 50),
			0);
		break;
	case 9:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("굴러다니는 잉영"),
			std::make_shared<Status>(10, 0, 0, 10),
			0);
		break;
	case 10:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("명탐정 고블린"),
			std::make_shared<Status>(15, 40, 1, 50),
			0);
		break;
	case 11:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("조별과제 이타치"),
			std::make_shared<Status>(2, 1, 1, 100),
			0);
		break;
	case 12:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("건강한 옴닉"),
			std::make_shared<Status>(6, 1, 1, 100),
			0);
		break;
	case 13:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("윤석현 교수님[데미 갓]"),
			std::make_shared<Status>(100, 109, 109, 109),
			0);
		break;
	case 14:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("너의 미래"),
			std::make_shared<Status>(3, 0, 0, 100),
			0);
		break;
	case 15:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("입대 영장"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 16:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("걸어다니는 햇반"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 17:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("술취한 동기"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 18:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("시마다 겐지"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 19:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("the Abyss team"),
			std::make_shared<Status>(500, 500, 500, 500),
			0);
		break;
	}
	return monster;
}
