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
	auto shared = shared_from_this();
	int count = shared.use_count();
	GetSceneManager()->SetNextScene(std::make_shared<MainScene>(shared_from_this()));

	Game::Run();
}
