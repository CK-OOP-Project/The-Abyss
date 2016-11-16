#include "stdafx.h"
#include "CreditScene.h"
#include "MainScene.h"


CreditScene::CreditScene(std::weak_ptr<Game> game)
	:Scene(game)
{
}

CreditScene::~CreditScene()
{
}

void CreditScene::Run()
{
	USING;
	Console::Clear();
	Console::SetForegroundColor(ConsoleColor::White);
	cout << "Á¦ÀÛÁø" << endl << endl;

	Console::SetForegroundColor(ConsoleColor::Red);
	cout << "ÆÀÀå" << endl;
	Console::SetForegroundColor(ConsoleColor::White);
	cout << "ÃÖÁöÇå" << endl << endl;

	Console::SetForegroundColor(ConsoleColor::DarkMagenta);
	cout << "ÆÀ¿ø" << endl;
	Console::SetForegroundColor(ConsoleColor::White);
	cout << "È²¼ºÁØ" << endl;
	cout << "ÃÖÀçÇõ";
	Console::ReadKey();
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
}
