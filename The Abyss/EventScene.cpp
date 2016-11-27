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
		std::cout << "작은돌맹이를 발견하였습니다. 만져 볼까?" << std::endl;
		ConsoleOption eventMenu0 = ConsoleOption(
		{
			"만진다.",

			"그냥 돌아간다.",
		},
		34, 10, 20);

		switch (eventMenu0.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "돌멩이가 번쩍거리더니 형태가 변했다." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "가 나왔다." << std::endl;
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
		std::cout << "부셔진 상자를 발견하였습니다. 만져 볼까?" << std::endl;

		ConsoleOption eventMenu1 = ConsoleOption(
		{
			"만진다.",

			"그냥 돌아간다.",
		},
		34, 10, 20);

		switch (eventMenu1.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "상자안에 보물이 담겨져 있다." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName() << "가 나왔다." << std::endl;
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
		std::cout << "석상을 발견하였습니다. 만져 볼까?" << std::endl;

		ConsoleOption eventMenu3 = ConsoleOption(
		{
			"만진다.",

			"그냥 돌아간다.",
		},
		34, 10, 20);

		switch (eventMenu3.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "석상안에 보물이 담겨져 있다." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()->c_str() << "가 나왔다." << std::endl;
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
		std::cout << "구멍을 발견하였습니다. 만져 볼까?" << std::endl;

		ConsoleOption eventMenu4 = ConsoleOption(
		{
			"살펴본다.",

			"그냥 돌아간다.",
		},
		34, 10, 20);

		switch (eventMenu4.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "구멍안에 보물이 담겨져 있다." << std::endl;

			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()->c_str() << "가 나왔다." << std::endl;
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
		std::cout << "쓰러진 몬스터 사체를 발견하였습니다. 만져 볼까?" << std::endl;

		ConsoleOption eventMenu5 = ConsoleOption(
		{
			"살펴본다.",

			"그냥 돌아간다.",
		},
		34, 10, 20);

		switch (eventMenu5.GetSelect())
		{

		case 0:
		{
			Console::Clear();
			std::cout << "사체가 아니다 움직이고 있다.!!!!." << std::endl;

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
		std::cout << "손소독제를 발견하셨습니다." <<
			std::endl << "손이 깨끗해지는 기분이든다.";
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}std::SkipableSleep(5000);
	break;


	case 7:
	{
		std::cout << "주인공은 춤을 춥니다.";
		std::cout << "아아 신난다 아이 신나 야 행복하다 ㅎㅎㅎ" << std::endl;
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
	}std::SkipableSleep(5000);
	break;

	}

}
