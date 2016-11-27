#include "stdafx.h"
#include "EventScene.h"
#include "Scene.h"
#include "DungeonScene.h"
#include"ConsoleOption.h"
#include"MonsterManager.h"
#include"EquipItemManager.h"
#include"sleep.h"
#include "memory"
EventScene::EventScene(std::weak_ptr<Game> game) :Scene(game)
{

}


EventScene::~EventScene()
{

}

void EventScene::Run()
{
	using namespace SteamB23;
	EventRand = rand() % 7 + 1;
	Console::Clear();
	switch (EventRand)
	{
	case 1:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "���������̸� �߰��Ͽ����ϴ�. ���� ����?" << std::endl;
		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"������.",

			"�׳� ���ư���.",
		},
		34, 10, 20);

		switch (eventMenu0.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "�����̰� ��½�Ÿ����� ���°� ���ߴ�." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "�� ���Դ�." << std::endl;
		}
		break;
		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}std::SkipableSleep(5000);
	break;


	case 2:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "�μ��� ���ڸ� �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu1 = ConsoleOption(
		{
			"������.",

			"�׳� ���ư���.",
		},
		34, 10, 20);

		switch (eventMenu1.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "���ھȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "�� ���Դ�." << std::endl;
		}
		break;
		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}std::SkipableSleep(5000);
	break;


	case 3:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "������ �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu3 = ConsoleOption(
		{
			"������.",

			"�׳� ���ư���.",
		},
		34, 10, 20);

		switch (eventMenu3.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "����ȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()->c_str() << "�� ���Դ�." << std::endl;
		}
		break;
		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}std::SkipableSleep(5000);
	break;


	case 4:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "������ �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu4 = ConsoleOption(
		{
			"���캻��.",

			"�׳� ���ư���.",
		},
		34, 10, 20);

		switch (eventMenu4.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "���۾ȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()->c_str() << "�� ���Դ�." << std::endl;
		}
		break;

		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}
	}std::SkipableSleep(5000);
	break;


	case 5:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "������ ���� ��ü�� �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu5 = ConsoleOption(
		{
			"���캻��.",

			"�׳� ���ư���.",
		},
		34, 10, 20);

		switch (eventMenu5.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "��ü�� �ƴϴ� �����̰� �ִ�.!!!!." << std::endl;

			std::SkipableSleep(5000);

			auto abyssGame = std::dynamic_pointer_cast<AbyssGame>(GetGame());
			auto battleScene = std::make_shared<BattleScene>(abyssGame, abyssGame->GetPlayerData(), MonsterManager::GetMonster(EventRand));
			GetGame()->GetSceneManager()->SetNextScene(battleScene);
		}std::SkipableSleep(5000);
		break;

		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}
	}
	std::SkipableSleep(5000);
	break;
	


	case 6:
	{
		std::cout << "�ռҵ����� �߰��ϼ̽��ϴ�." <<
			std::endl << "���� ���������� ����̵��.";
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}std::SkipableSleep(5000);
	break;


	case 7:
	{
		std::cout << "���ΰ��� ���� ��ϴ�.";
		std::cout << "�ƾ� �ų��� ���� �ų� �� �ູ�ϴ� ������" << std::endl;
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}std::SkipableSleep(5000);
	break;

	}

}
