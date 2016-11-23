#include "stdafx.h"
#include "MainScene.h"
#include "IntroScene.h"
#include "CreditScene.h"


MainScene::MainScene(std::weak_ptr<Game> game)
	:Scene(game)
{
}

void MainScene::Run()
{
	// 버퍼 날리기
	while (SteamB23::Console::GetKeyAvailable())
	{
		SteamB23::Console::ReadKey();
	}
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
		sceneManager->SetNextScene(std::make_shared<CreditScene>(GetGame()));
		return;
	case 2:
		// 종료
		return;
	default:
		sceneManager->SetNextScene(sceneManager->GetCurrentScene());
	}
}


MainScene::~MainScene()
{
}
