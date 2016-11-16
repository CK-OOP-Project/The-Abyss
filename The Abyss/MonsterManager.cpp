#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	std::shared_ptr<Monster> monster;//몰라도 되여
	int ran = rand();//몬스터 고르는 랜덤값
	switch (ran) {

	case 0:
		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("해골 병사"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(5, 5, 5, 5),
			0);
		break;
	case 1:

		std::make_shared<Monster>(
			std::make_shared<std::string>("어둠의 해골 병사"),
			std::make_shared<Status>(12, 12, 12, 12),
			0);
		break;
	case 2:

		std::make_shared<Monster>(
			std::make_shared<std::string>("걸어다니는 별가사리"),
			std::make_shared<Status>(3, 3, 3, 3),
			0);
		break;
	case 3:

		std::make_shared<Monster>(
			std::make_shared<std::string>("어둠의 해초범벅"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 4:

		std::make_shared<Monster>(
			std::make_shared<std::string>("살아 숨쉬는 조별과제"),
			std::make_shared<Status>(15, 1, 1, 1),
			0);
		break;
	case 5:

		std::make_shared<Monster>(
			std::make_shared<std::string>("거 울 (유어 페이스)"),
			std::make_shared<Status>(10, 1, 1, 1),
			0);
		break;
	case 6:

		std::make_shared<Monster>(
			std::make_shared<std::string>("과제하다 죽은 영혼"),
			std::make_shared<Status>(1, 1, 1, 1),
			0);
		break;
	case 7:

		std::make_shared<Monster>(
			std::make_shared<std::string>("저장된 팀 프로젝트가 날라간 3학년"),
			std::make_shared<Status>(15, 100, 3, 3),
			0);
		break;
	case 8:
		std::make_shared<Monster>(
			std::make_shared<std::string>("담배를 못끊는 아저씨"),
			std::make_shared<Status>(5, 15, 5, 5),
			0);
		break;
	case 9:

		std::make_shared<Monster>(
			std::make_shared<std::string>("굴러다니는 잉영"),
			std::make_shared<Status>(1, 0, 0, 0),
			0);
		break;
	case 10:

		std::make_shared<Monster>(
			std::make_shared<std::string>("명탐정 고블린"),
			std::make_shared<Status>(15, 40, 1, 1),
			0);
		break;
	case 11:

		std::make_shared<Monster>(
			std::make_shared<std::string>("조별과제 이타치"),
			std::make_shared<Status>(2, 1, 1, 1),
			0);
		break;
	case 12:

		std::make_shared<Monster>(
			std::make_shared<std::string>("건강한 옴닉"),
			std::make_shared<Status>(60, 1, 1, 1),
			0);
		break;
	case 13:

		std::make_shared<Monster>(
			std::make_shared<std::string>("윤석현 교수님[데미 갓]"),
			std::make_shared<Status>(9999, 9999, 9999, 9999),
			0);
		break;
	case 14:

		std::make_shared<Monster>(
			std::make_shared<std::string>("너의 미래"),
			std::make_shared<Status>(1, 0, 0, 0),
			0);
		break;
	case 15:

		std::make_shared<Monster>(
			std::make_shared<std::string>("입대 영장"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 16:

		std::make_shared<Monster>(
			std::make_shared<std::string>("걸어다니는 햇반"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 17:

		std::make_shared<Monster>(
			std::make_shared<std::string>("술취한 동기"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 18:

		std::make_shared<Monster>(
			std::make_shared<std::string>("시마다 겐지(오버워치아님)"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 19:

		std::make_shared<Monster>(
			std::make_shared<std::string>("the Abyss team"),
			std::make_shared<Status>(5000, 5000, 5000, 5000),
			0);
		break;
	}
	return monster;
}
