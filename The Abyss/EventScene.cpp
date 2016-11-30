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
		std::cout << "이곳은 지하임에도 수풀이 우거진 곳이다. 풀의 내음이 진하게 퍼진다."<<std::endl;
		std::SkipableSleep(5000);
		std::cout << "수풀의 한가운데 황금색의 공모양의 작을 돌이 번쩍이고 있다." << std::endl;
			std::SkipableSleep(5000);
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
			std::cout << "돌에서 영롱한 기운이 나오는것 같다." << std::endl;
			std::SkipableSleep(5000);
			std::cout << "돌을 손에 움켜지고 살펴봤다." << std::endl;
			std::SkipableSleep(5000);
			std::cout << "돌멩이가 번쩍거리더니 형태가 변했다." << std::endl;
			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout << GetItem->GetName()->c_str() << "가 나왔다." << std::endl;
			std::SkipableSleep(5000);
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		case 1:
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
			std::cout << GetItem->GetName()->c_str() << "가 나왔다." << std::endl;
			std::SkipableSleep(5000);
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		case 1:
		{
			Console::Clear();
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}
	break;


	case 3:
	{
		int itemRand = rand() % 2 + 1;
		std::cout << "이곳은 축축한 이끼가 잔뜩낀 석실인듯 하다. 석실 안에서 곰팡이 냄세가 난다." << std::endl;
		std::cout<<"석상을 발견하였습니다.  만져 볼까 ? " << std::endl;

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
			std::cout << "석상을 열심히 수색했다." << std::endl;
			std::SkipableSleep(5000);
			std::cout << "석상안에 보물이 담겨져 있다." << std::endl;
			std::SkipableSleep(5000);
			std::cout << "보물에서 영롱한 빛이 흘러 나온다." << std::endl;
			std::SkipableSleep(5000);

			std::shared_ptr<EquipItem> GetItem = EquipItemManager::GetItem(1);
			std::dynamic_pointer_cast<AbyssGame>(GetGame())->GetPlayerData()->SetEquipItem(GetItem->GetEquipType(), GetItem);
			std::cout<<"신난다 나는 " << GetItem->GetName()->c_str() << "를 획득 하였다!!." << std::endl;
			std::SkipableSleep(5000);
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		case 1:
		{
			Console::Clear();
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}

	}
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
			std::SkipableSleep(5000);
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;

		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}
	}
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
		}
		break;
		case 1:
		{
			GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		}
		break;
		}
	}
	break;
	


	case 6:
	{
		std::cout << "손소독제를 발견하셨습니다." <<
			std::endl << "손이 깨끗해지는 기분이든다.";
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));

	}
	break;


	case 7:
	{
		std::cout << "주인공은 춤을 춥니다." << std::endl;
		std::cout << "아아 신난다 아이 신나 야 행복하다 ㅎㅎㅎ" << std::endl;
		std::SkipableSleep(5000);
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));

	}
	break;

	}

}
