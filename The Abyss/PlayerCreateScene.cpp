#include "stdafx.h"
#include "PlayerCreateScene.h"
#include "AbyssGame.h"

#include "sleep.h"

PlayerCreateScene::PlayerCreateScene(std::weak_ptr<Game> game)
	: Scene(game)
{
	
}


PlayerCreateScene::~PlayerCreateScene()
{
}

void PlayerCreateScene::Run()
{
	using namespace std;
	using namespace SteamB23;
	SteamB23::Console::Clear();
	SteamB23::Console::SetTitle(L"The Abyss - 캐릭터 생성");
	PlayerCreate();
}

void PlayerCreateScene::PlayerCreate()
{
	
	std::cout << "캐릭터 생성" << std::endl;

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());

	auto status = game->GetPlayerData()->GetStatus();

	status->constitution = rand() % 11 + 10;
	status->dexterity = rand() % 11 + 10;
	status->intelligence = rand() % 11 + 10;
	status->strength = rand() % 11 + 10;
	std::cout << "캐릭터 생성됨" << std::endl;
	
	using namespace std;
	SkipableSleep(8000);
	print();
}

void PlayerCreateScene::print()
{
	SteamB23::Console::Clear();

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());

	auto status = game->GetPlayerData()->GetStatus();
	
	ConsoleText title = ConsoleText(
		"-=플레이어 능력치=-",
		30, 2,30,
	SteamB23::ConsoleColor::Red);
	title.Present();


	ConsoleText constitution = ConsoleText(
		"생명력 : :",
		32, 6, 11,
		SteamB23::ConsoleColor::Red);
	constitution.Present();
	std::cout <<status->constitution << std::endl;//생명력
	

	ConsoleText dexterity = ConsoleText(
		"민첩성 : :",
		32, 8, 11,
		SteamB23::ConsoleColor::Red);
	dexterity.Present();
    std::cout << status->dexterity << std::endl;//민첩성



	ConsoleText intelligence = ConsoleText(
		"지능   : :",
		32, 10, 11,
		SteamB23::ConsoleColor::Red);
	intelligence.Present();
	std::cout << status->intelligence << std::endl;//지능



	ConsoleText strength = ConsoleText(
		"힘     : :",
		32, 12, 11,
		SteamB23::ConsoleColor::Red);
	strength.Present();
	std::cout << status->strength << std::endl;//힘

}