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
	cout << "������" << endl << endl;

	Console::SetForegroundColor(ConsoleColor::Red);
	cout << "����" << endl;
	Console::SetForegroundColor(ConsoleColor::White);
	cout << "������" << endl << endl;

	Console::SetForegroundColor(ConsoleColor::DarkMagenta);
	cout << "����" << endl;
	Console::SetForegroundColor(ConsoleColor::White);
	cout << "Ȳ����" << endl;
	cout << "������";
	Console::ReadKey();
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
}
