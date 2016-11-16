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

void DungeonScene::Run()
{
	using namespace SteamB23;
	Console::Clear();
	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	std::cout << "던전 " << Floor << "층 이다." << std::endl;



	if (Event == 0)
		Event = rand() % 2 + 1;
	if (Event == 2)//아무일도 일어나지 않았다.
	{
		Console::Clear;
		std::cout << "아무 일도 일어나지 않았습니다." << std::endl << "무엇을 하시겠습니까?";
		int A;
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


}



