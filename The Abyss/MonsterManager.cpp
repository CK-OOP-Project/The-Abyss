#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	std::shared_ptr<Monster> monster;//���� �ǿ�
	int ran = rand();//���� ���� ������
	switch (ran) {

	case 0:
		monster = std::make_shared<Monster>(
			std::make_shared<std::string>("�ذ� ����"),
			//(int strength, int intelligence, int dexterity, int constitution)
			std::make_shared<Status>(5, 5, 5, 5),
			0);
		break;
	case 1:

		std::make_shared<Monster>(
			std::make_shared<std::string>("����� �ذ� ����"),
			std::make_shared<Status>(12, 12, 12, 12),
			0);
		break;
	case 2:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�ɾ�ٴϴ� �����縮"),
			std::make_shared<Status>(3, 3, 3, 3),
			0);
		break;
	case 3:

		std::make_shared<Monster>(
			std::make_shared<std::string>("����� ���ʹ���"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 4:

		std::make_shared<Monster>(
			std::make_shared<std::string>("��� ������ ��������"),
			std::make_shared<Status>(15, 1, 1, 1),
			0);
		break;
	case 5:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�� �� (���� ���̽�)"),
			std::make_shared<Status>(10, 1, 1, 1),
			0);
		break;
	case 6:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�����ϴ� ���� ��ȥ"),
			std::make_shared<Status>(1, 1, 1, 1),
			0);
		break;
	case 7:

		std::make_shared<Monster>(
			std::make_shared<std::string>("����� �� ������Ʈ�� ���� 3�г�"),
			std::make_shared<Status>(15, 100, 3, 3),
			0);
		break;
	case 8:
		std::make_shared<Monster>(
			std::make_shared<std::string>("��踦 ������ ������"),
			std::make_shared<Status>(5, 15, 5, 5),
			0);
		break;
	case 9:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�����ٴϴ� �׿�"),
			std::make_shared<Status>(1, 0, 0, 0),
			0);
		break;
	case 10:

		std::make_shared<Monster>(
			std::make_shared<std::string>("��Ž�� ���"),
			std::make_shared<Status>(15, 40, 1, 1),
			0);
		break;
	case 11:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�������� ��Ÿġ"),
			std::make_shared<Status>(2, 1, 1, 1),
			0);
		break;
	case 12:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�ǰ��� �ȴ�"),
			std::make_shared<Status>(60, 1, 1, 1),
			0);
		break;
	case 13:

		std::make_shared<Monster>(
			std::make_shared<std::string>("������ ������[���� ��]"),
			std::make_shared<Status>(9999, 9999, 9999, 9999),
			0);
		break;
	case 14:

		std::make_shared<Monster>(
			std::make_shared<std::string>("���� �̷�"),
			std::make_shared<Status>(1, 0, 0, 0),
			0);
		break;
	case 15:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�Դ� ����"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 16:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�ɾ�ٴϴ� �޹�"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 17:

		std::make_shared<Monster>(
			std::make_shared<std::string>("������ ����"),
			std::make_shared<Status>(30, 1, 1, 1),
			0);
		break;
	case 18:

		std::make_shared<Monster>(
			std::make_shared<std::string>("�ø��� ����(������ġ�ƴ�)"),
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
