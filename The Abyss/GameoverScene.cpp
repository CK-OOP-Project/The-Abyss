#include "stdafx.h"
#include "GameoverScene.h"
#include "MainScene.h"


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
	Console::SetTitle(TEXT("The Abyss - ���ӿ���"));
	cout << "����� ����߽��ϴ�." << endl;
	SkipableSleep(2000);
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
}
