#include "stdafx.h"
#include "DungeonScene.h"
#include<memory>
#include "Scene.h"
#include "MonsterManager.h"
#include "EquipItem.h"
#include"EventScene.h"
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
	std::shared_ptr<std::string>headitemName;//string Ÿ���� ����Ʈ������ ���� ����
	std::shared_ptr<std::string>bodyitemName;
	std::shared_ptr<std::string>weaponitemName;


	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto status = game->GetPlayerData()->GetStatus();

	int maxHp = status->constitution;//�ִ�ä��
	char maxHpStr[30];
	int strength = status->strength;//�� 
	char StrengthStr[30];

	auto abyssGame = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	auto playerdata = abyssGame->GetPlayerData();//�÷��̾� ������ ��������

	std::shared_ptr< EquipItem> head = playerdata->GetEquipItem(EquipType::Head);
	std::shared_ptr< EquipItem> body = playerdata->GetEquipItem(EquipType::Body);
	std::shared_ptr< EquipItem> weapon = playerdata->GetEquipItem(EquipType::Weapon);

	//�Ӹ� ��� �̸�
	if (head != nullptr)
		headitemName = head->GetName();
	else headitemName = std::make_shared<std::string>("����.");
	char headequip[30];

	//���� ��� �̸�
	if (weapon != nullptr)
		weaponitemName = weapon->GetName();
	else weaponitemName = std::make_shared<std::string>("����.");
	char  weaponequip[30];

	//������ �̸�
	if (body != nullptr)
		bodyitemName = body->GetName();
	else bodyitemName = std::make_shared<std::string>("����.");
	char bodyequip[30];

	int currHp = playerdata->GetCurrentHP();//���� hp




	int attack = playerdata->GetStrikingPower();//���ݷ�
	char attackStr[30];


	wsprintfA(attackStr, "���ݷ� ::      %d", attack);
	wsprintfA(maxHpStr, "ü��   :: %d / %d", currHp, maxHp);
	wsprintfA(StrengthStr, "��     ::      %d", strength);
	wsprintfA(bodyequip, "����   ::    %s", bodyitemName->c_str());
	wsprintfA(weaponequip, "����   ::    %s", weaponitemName->c_str());
	wsprintfA(headequip, "�Ӹ�   ::    %s", headitemName->c_str());
	ConsoleTextBox inventory = ConsoleTextBox({
		maxHpStr,attackStr,StrengthStr,"-----------------",bodyequip,weaponequip,headequip,

	},
	80 - 30, 0, 30,
	SteamB23::ConsoleColor::DarkMagenta);
	inventory.Present();

}

void DungeonScene::Run()
{
	using namespace SteamB23;
	Console::Clear();

	auto game = std::dynamic_pointer_cast<AbyssGame, Game>(GetGame());
	std::cout << "���� " << Floor << "�� �̴�." << std::endl;

	Event = rand() % 3 + 1;
	if (Event == 2)//�ƹ��ϵ� �Ͼ�� �ʾҴ�.
	{
		
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
	if (Event == 3)//Ư�� �̺�Ʈ
	{
		std::cout << "!!! ���� �߰��ߴ� ��ƾƾ�!";
		std::SkipableSleep(1000);
		GetGame()->GetSceneManager()->SetNextScene(std::make_shared<EventScene>(GetGame()));
	}

	if (Event == 1)//���� ����
	{
		std::cout << "���� ����!!!";
		Floor++;
		auto abyssGame = std::dynamic_pointer_cast<AbyssGame>(GetGame());
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