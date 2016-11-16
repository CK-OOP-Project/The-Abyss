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

void DungeonScene::Run()
{
	using namespace SteamB23;
	Console::Clear();
	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	std::cout << "���� " << Floor << "�� �̴�." << std::endl;



	if (Event == 0)
		Event = rand() % 2 + 1;
	if (Event == 2)//�ƹ��ϵ� �Ͼ�� �ʾҴ�.
	{
		Console::Clear;
		std::cout << "�ƹ� �ϵ� �Ͼ�� �ʾҽ��ϴ�." << std::endl << "������ �Ͻðڽ��ϱ�?";
		int A;
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


}



