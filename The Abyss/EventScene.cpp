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
			34, 10, 11);
		
		switch (itemRand) {

		case 1:
	     	{
			Console::Clear();
			std::cout << "�����̰� ��½�Ÿ����� ���°� ���ߴ�." << std::endl;

			std::SkipableSleep(1000);

			std::shared_ptr<EquipItem> GetItem = std::make_shared<EquipItem>();
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()<< "�� ���Դ�." <<std::endl;
	      	}
			break;
		case 2:
	        {
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		    }
			break;
		}
			
	}
break;


	case 2:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "�μ��� ���ڸ� �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"������.",

			"�׳� ���ư���.",
		},
			34, 10, 11);

		switch (itemRand) {

		case 1:
		{
			Console::Clear();
			std::cout << "���ھȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(1000);

			std::shared_ptr<EquipItem> GetItem = std::make_shared<EquipItem>();
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "�� ���Դ�." << std::endl;
		}
		break;
		case 2:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}
break;


	case 3:
{
		int itemRand = rand() % 2 + 1;
		std::cout << "������ �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"������.",

			"�׳� ���ư���.",
		},
			34, 10, 11);

		switch (itemRand) {

		case 1:
		{
			Console::Clear();
			std::cout << "����ȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(1000);

			std::shared_ptr<EquipItem> GetItem = std::make_shared<EquipItem>();
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "�� ���Դ�." << std::endl;
		}
		break;
		case 2:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}
break;


	case 4:	
{
		int itemRand = rand() % 2 + 1;
		std::cout << "������ �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"���캻��.",

			"�׳� ���ư���.",
		},
			34, 10, 11);

		switch (itemRand) {

		case 1:
		{
			Console::Clear();
			std::cout << "���۾ȿ� ������ ����� �ִ�." << std::endl;

			std::SkipableSleep(1000);

			std::shared_ptr<EquipItem> GetItem = std::make_shared<EquipItem>();
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "�� ���Դ�." << std::endl;
		}
		break;

		case 2:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
	}
}
break;


	case 5: {
		int itemRand = rand() % 2 + 1;
		std::cout << "������ ���� ��ü�� �߰��Ͽ����ϴ�. ���� ����?" << std::endl;

		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"���캻��.",

			"�׳� ���ư���.",
		},
			34, 10, 11);

		switch (itemRand) {

		case 1:
		{
			Console::Clear();
			std::cout << "��ü�� �ƴϴ� �����̰� �ִ�.!!!!." << std::endl;

			std::SkipableSleep(1000);

			auto abyssGame = std::dynamic_pointer_cast<AbyssGame>(GetGame());
			auto battleScene = std::make_shared<BattleScene>(abyssGame, abyssGame->GetPlayerData(), MonsterManager::GetMonster(EventRand));
			GetGame()->GetSceneManager()->SetNextScene(battleScene);
		}
		break;

		case 2:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}
	}


	case 6:
	{
		std::cout << "�ռҵ����� �߰��ϼ̽��ϴ�." << 
			std::endl << "���� ���������� ����̵��.";
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}break;

	case 7:
	{
		std::cout << "���ΰ��� ���� ��ϴ�.";
		std::cout << "�ƾ� �ų��� ���� �ų� �� �ູ�ϴ� ������" << std::endl;
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}break;

	}

}
