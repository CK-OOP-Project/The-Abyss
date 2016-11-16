#include "stdafx.h"
#include "MainScene.h"
#include "IntroScene.h"


MainScene::MainScene(std::weak_ptr<Game> game)
	:Scene(game)
{
}

void MainScene::Run()
{
	SteamB23::Console::Clear();
	SteamB23::Console::SetTitle(TEXT("The Abyss"));
	SceneManager* sceneManager = GetGame()->GetSceneManager();
	title.Present();
	switch (mainMenu.GetSelect())
	{
	case 0:
		sceneManager->SetNextScene(std::make_shared<IntroScene>(GetGame()));
		return;
	case 1:
		break;
	case 3: 
		system("exit");
		return;
	default:
		sceneManager->SetNextScene(sceneManager->GetCurrentScene());
	}
}


MainScene::~MainScene()
{
}
