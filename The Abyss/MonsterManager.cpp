#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	std::shared_ptr<Monster> monster;//���� �ǿ�
	int ran = rand()%20;//���� ���� ������
	
	switch (ran) {

	case 0:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ذ� ����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(3, 5, 5, 5),
			0);
		break;
	case 1:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("����� �ذ� ����"),
			std::make_shared<Status>(3, 12, 12, 52),
			0);
		break;
	case 2:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ɾ�ٴϴ� �����縮"),
			std::make_shared<Status>(3, 3, 3, 50),
			0);
		break;
	case 3:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("����� ���ʹ���"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 4:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("��� ������ ��������"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 5:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�� �� (���� ���̽�)"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 6:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�����ϴ� ���� ��ȥ"),
			std::make_shared<Status>(3, 1, 1, 50),
			0);
		break;
	case 7:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("����� �� ������Ʈ�� ���� 3�г�"),
			std::make_shared<Status>(3, 100, 3, 50),
			0);
		break;
	case 8:
		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("��踦 ������ ������"),
			std::make_shared<Status>(3, 15, 5, 50),
			0);
		break;
	case 9:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�����ٴϴ� �׿�"),
			std::make_shared<Status>(10, 0, 0, 10),
			0);
		break;
	case 10:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("��Ž�� ���"),
			std::make_shared<Status>(15, 40, 1, 50),
			0);
		break;
	case 11:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�������� ��Ÿġ"),
			std::make_shared<Status>(2, 1, 1, 100),
			0);
		break;
	case 12:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ǰ��� �ȴ�"),
			std::make_shared<Status>(6, 1, 1, 100),
			0);
		break;
	case 13:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("������ ������[���� ��]"),
			std::make_shared<Status>(100, 109, 109, 109),
			0);
		break;
	case 14:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("���� �̷�"),
			std::make_shared<Status>(3, 0, 0, 100),
			0);
		break;
	case 15:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�Դ� ����"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 16:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ɾ�ٴϴ� �޹�"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 17:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("������ ����"),
			std::make_shared<Status>(3, 1, 1, 100),
			0);
		break;
	case 18:

		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ø��� ����"),
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
