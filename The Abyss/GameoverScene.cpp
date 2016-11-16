#include "stdafx.h"
#include "GameoverScene.h"
#include "MainScene.h"
#include"sleep.h"
#include"ConsoleTextBox.h"
GameoverScene::GameoverScene(std::weak_ptr<Game> game)
	:Scene(game)
{
}

GameoverScene::~GameoverScene()
{
}

void GameoverScene::Run()
{
	USING;
	Console::Clear();
	Console::SetTitle(TEXT("The Abyss - 게임오버"));
	ConsoleTextBox youdie = ConsoleTextBox({
	"당신은 죽었습니다.","   ",

	"    축하합니다.",
	},
		34, 10, 20,
	SteamB23::ConsoleColor::DarkMagenta);
	youdie.Present();
	
	SkipableSleep(2000);
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
}
