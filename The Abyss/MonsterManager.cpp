#include "stdafx.h"
#include "MonsterManager.h"

std::shared_ptr<Monster> MonsterManager::GetMonster(int level)
{
	int ran = rand();//���� ���� ������
	std::shared_ptr<Monster> monster;//���� �ǿ�
	
	monster = std::make_shared<Monster>(
		std::make_shared<std::string>("�ذ� ����"),
		//(int strength, int intelligence, int dexterity, int constitution)
		std::make_shared<Status>(5, 5, 5, 5),
		0);
/*
	std::make_shared<Monster>(
		std::make_shared<std::string>("����� �ذ� ����"),
		std::make_shared<Status>(12, 12, 12, 12),
		0);
	
	std::make_shared<Monster>(
		std::make_shared<std::string>("�ɾ�ٴϴ� �ذ�"),
		std::make_shared<Status>(3, 3, 3, 3),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("����� ġŲ ����"),
		std::make_shared<Status>(30, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("ġŲ ����"),
		std::make_shared<Status>(15, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("�ɾ�ٴϴ� ġŲ"),
		std::make_shared<Status>(10, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("������ ��ȥ"),
		std::make_shared<Status>(1, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("��ȥ ����"),
		std::make_shared<Status>(3, 10, 3, 3),
		0);
	
	std::make_shared<Monster>(
		std::make_shared<std::string>("����� ��ȥ ����"),
		std::make_shared<Status>(5, 15, 5, 5),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("���� ���"),
		std::make_shared<Status>(1, 0, 0, 0),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("��Ž�� ���"),
		std::make_shared<Status>(15, 40, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("��� ���"),
		std::make_shared<Status>(2, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("�ǰ��� ���"),
		std::make_shared<Status>(60, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("�߱��� ���"),
		std::make_shared<Status>(15, 1, 1, 1),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("��� ���"),
		std::make_shared<Status>(30, 1, 30, 30),
		0);

	std::make_shared<Monster>(
		std::make_shared<std::string>("���ð���"),
		std::make_shared<Status>(30, 1, 1, 1),
		0);*/


	return monster;
}
