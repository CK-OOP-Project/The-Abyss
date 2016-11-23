#include "stdafx.h"
#include "DungeonScene.h"
#include<memory>
#include "Scene.h"
#include "MonsterManager.h"

DungeonScene::DungeonScene(std::weak_ptr<Game> game) : Scene(game)
{
	Floor = 0;
	Event = 0;
	srand(UINT(time(NULL)));
}

DungeonScene::~DungeonScene()
{

}

void DungeonScene::printStatus()
{
	using namespace SteamB23;

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto status = game->GetPlayerData()->GetStatus();

	int maxHp = status->constitution;//�ִ�ä��
	char maxHpStr[30];
	int strength = status->strength;//�� 
	char StrengthStr[30];

	auto abyssGame = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto playerdata = abyssGame->GetPlayerData();

	int currHp = playerdata->GetCurrentHP();//���� hp

	int attack = playerdata->GetStrikingPower();//���ݷ�
	char attackStr[30];


	wsprintfA(attackStr, "���ݷ� ::      %d", attack);
	wsprintfA(maxHpStr, "ü��   :: %d / %d", currHp, maxHp);
	wsprintfA(StrengthStr, "��     ::      %d", strength);

	ConsoleTextBox inventory = ConsoleTextBox({
		maxHpStr,attackStr,StrengthStr,

	},
		80 - 20, 0, 20,
		SteamB23::ConsoleColor::DarkMagenta);
	inventory.Present();

}

void DungeonScene::Run()
{
	using namespace SteamB23;
	Console::Clear();

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	std::cout << "���� " << Floor << "�� �̴�." << std::endl;

		Event = rand() % 2 + 1;
	if (Event == 2)//�ƹ��ϵ� �Ͼ�� �ʾҴ�.
	{
		Console::Clear;
		std::cout << "�ƹ� �ϵ� �Ͼ�� �ʾҽ��ϴ�." << std::endl << "������ �Ͻðڽ��ϱ�?";
		int A;
		printStatus();
		ConsoleOption battleMenu = ConsoleOption(
		{
			"��������",

			"����",
		},
		34, 10, 11);

		switch (battleMenu.GetSelect())
		{
		case 0:
			Floor++;
			GetGame()->GetSceneManager()->SetNextScene(shared_from_this());
			break;

		case 1:
			GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
		}


	}
	//if (Event == 2)//Ư�� �̺�Ʈ
	//{
	//	std::cout << "!!!";
	//}����

	if (Event == 1)//���� ����
	{
		std::cout << "���� ����!!!";
		Floor++;
		auto abyssGame = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
		auto battleScene = std::make_shared<BattleScene>(abyssGame, abyssGame->GetPlayerData(), MonsterManager::GetMonster(Floor));
		GetGame()->GetSceneManager()->SetNextScene(battleScene);
	
	}
	printStatus();

}

std::shared_ptr<DungeonScene> DungeonScene::GetInstance(std::shared_ptr<Game> game)
{
	if (instance == nullptr)
		instance = std::make_shared<DungeonScene>(game);
	return instance;
}


std::shared_ptr<DungeonScene> DungeonScene::instance;