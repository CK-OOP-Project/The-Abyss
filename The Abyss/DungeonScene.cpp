#include "stdafx.h"
#include "DungeonScene.h"
#include<memory>
#include "Scene.h"

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
	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());

	while (1)
	{
		if(Event == 0)
			Event = rand() % 3 + 1;
		if (Event == 1)//아무일도 일어나지 않았다.
		{
			std::cout << "아무 일도 일어나지 않았습니다.";
		}
		if (Event == 2)//특수 이벤트
		{
			std::cout << "!!!";
		}
		if (Event == 3)//몬스터 조우
		{
			std::cout << "몬스터 출현!!!";
			//game->GetSceneManager()->SetNextScene();
		}

	}

}
