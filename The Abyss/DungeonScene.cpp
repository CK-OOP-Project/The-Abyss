#include "stdafx.h"
#include "DungeonScene.h"
#include<memory>
#include "Scene.h"
#include "MonsterManager.h"

DungeonScene::DungeonScene(std::weak_ptr<Game> game) : Scene(game)
{
	Floor = 0;
	Event = 0;
	srand(UINT(time(NULL)));
}

DungeonScene::~DungeonScene()
{

}

void DungeonScene::printStatus()
{
	using namespace SteamB23;

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto status = game->GetPlayerData()->GetStatus();

	int maxHp = status->constitution;//최대채력
	char maxHpStr[30];
	int strength = status->strength;//힘 
	char StrengthStr[30];

	auto abyssGame = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto playerdata = abyssGame->GetPlayerData();

	int currHp = playerdata->GetCurrentHP();//현재 hp

	int attack = playerdata->GetStrikingPower();//공격력
	char attackStr[30];


	wsprintfA(attackStr, "공격력 ::      %d", attack);
	wsprintfA(maxHpStr, "체력   :: %d / %d", currHp, maxHp);
	wsprintfA(StrengthStr, "힘     ::      %d", strength);

	ConsoleTextBox inventory = ConsoleTextBox({
		maxHpStr,attackStr,StrengthStr,

	},
		80 - 20, 0, 20,
		SteamB23::ConsoleColor::DarkMagenta);
	inventory.Present();

}

void DungeonScene::Run()
{
	using namespace SteamB23;
	Console::Clear();

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	std::cout << "던전 " << Floor << "층 이다." << std::endl;

		Event = rand() % 2 + 1;
	if (Event == 2)//아무일도 일어나지 않았다.
	{
		Console::Clear;
		std::cout << "아무 일도 일어나지 않았습니다." << std::endl << "무엇을 하시겠습니까?";
		int A;
		printStatus();
		ConsoleOption battleMenu = ConsoleOption(
		{
			"내려가기",

			"종료",
		},
		34, 10, 11);

		switch (battleMenu.GetSelect())
		{
		case 0:
			Floor++;
			GetGame()->GetSceneManager()->SetNextScene(shared_from_this());
			break;

		case 1:
			GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
		}


	}
	//if (Event == 2)//특수 이벤트
	//{
	//	std::cout << "!!!";
	//}보류

	if (Event == 1)//몬스터 조우
	{
		std::cout << "몬스터 출현!!!";
		Floor++;
		auto abyssGame = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
		auto battleScene = std::make_shared<BattleScene>(abyssGame, abyssGame->GetPlayerData(), MonsterManager::GetMonster(Floor));
		GetGame()->GetSceneManager()->SetNextScene(battleScene);
	
	}
	printStatus();

}

std::shared_ptr<DungeonScene> DungeonScene::GetInstance(std::shared_ptr<Game> game)
{
	if (instance == nullptr)
		instance = std::make_shared<DungeonScene>(game);
	return instance;
}


std::shared_ptr<DungeonScene> DungeonScene::instance;