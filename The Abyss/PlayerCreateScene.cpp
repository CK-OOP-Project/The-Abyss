#include "stdafx.h"
#include "PlayerCreateScene.h"
#include "AbyssGame.h"


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
}
