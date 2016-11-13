#include "stdafx.h"
#include "DungeonScene.h"
#include<memory>
#include "Scene.h"

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
	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());

	while (1)
	{
		if(Event == 0)
			Event = rand() % 3 + 1;
		if (Event == 1)//�ƹ��ϵ� �Ͼ�� �ʾҴ�.
		{
			std::cout << "�ƹ� �ϵ� �Ͼ�� �ʾҽ��ϴ�.";
		}
		if (Event == 2)//Ư�� �̺�Ʈ
		{
			std::cout << "!!!";
		}
		if (Event == 3)//���� ����
		{
			std::cout << "���� ����!!!";
			//game->GetSceneManager()->SetNextScene();
		}

	}

}
