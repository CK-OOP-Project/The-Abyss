#include "stdafx.h"
#include "AbyssGame.h"


AbyssGame::AbyssGame()
{
}


AbyssGame::~AbyssGame()
{
}

void AbyssGame::Run()
{
	GetSceneManager()->SetNextScene(std::make_shared<MainScene>(shared_from_this()));

	Game::Run();
}
