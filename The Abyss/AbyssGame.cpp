#include "stdafx.h"
#include "AbyssGame.h"


AbyssGame::AbyssGame()
{
	playerData = std::make_shared<PlayerData>();
	srand((UINT)time(0));
}


AbyssGame::~AbyssGame()
{
}

void AbyssGame::Run()
{
	GetSceneManager()->SetNextScene(std::make_shared<MainScene>(shared_from_this()));

	Game::Run();
}
