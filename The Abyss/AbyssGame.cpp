#include "stdafx.h"
#include "AbyssGame.h"


AbyssGame::AbyssGame()
{
	playerData = std::make_shared<PlayerData>();
    killCounter = 0;
	srand((UINT)time(0));
}


AbyssGame::~AbyssGame()
{
}

int AbyssGame::GetKillCounter()
{
    return killCounter;
}

void AbyssGame::SetKillCounter(int value)
{
    killCounter = value;
}

void AbyssGame::Run()
{
	GetSceneManager()->SetNextScene(std::make_shared<MainScene>(shared_from_this()));

	Game::Run();
}
