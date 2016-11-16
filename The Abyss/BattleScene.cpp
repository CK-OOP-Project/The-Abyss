#include "stdafx.h"

#include "BattleScene.h"
//����� �� ����
#include"DungeonScene.h"
#include "SceneManager.h"
#include"GameoverScene.h"

#include "ConsoleOption.h"
#include "sleep.h"

BattleScene::BattleScene(std::weak_ptr<Game> game,
	std::shared_ptr<Battler>battler1,
	std::shared_ptr<Battler>battler2)
	
	:Scene(game)
{
	this->battler1 = battler1;
	this->battler2 = battler2;
}


BattleScene::~BattleScene()
{
}

void BattleScene::Run()
{
	using namespace SteamB23;//�ֿܼɼ� ���� ����� ���� ���
	using namespace std;
	ConsoleOption battleMenu = ConsoleOption(
	{
		"�� ��",

		"�� ��",
	},
		34, 10,11 );

	switch (battleMenu.GetSelect())
	{
	case 0://back
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		break;
	case 1://���� �Լ��� �����մϴ�.
		Battle();
		break;
	}
	//�÷��̾� ���� �� �ʱ�ȭ (�ƽ�)

}

void BattleScene::Battle()
{
	USING;
	Console::Clear();
	using namespace SteamB23;//�ֿܼɼ� ���� ����� ���� ���
	using namespace std;

	
	int playerHP = battler1->GetHP();//�÷��̾� hp�� �ʱ�ȭ
	int playerMP = battler1->GetMP();//�÷��̾� mp�� �ʱ�ȭ
	int playerATT = battler1->GetStrikingPower();//�÷��̾� ���ݷ��� �ʱ�ȭ
	int playerAMOR = battler1->GetDefensivePower();//�÷��̾� ������ �ʱ�ȭ
	int playerACC = battler1->GetAccuracy();//�÷��̾� ���߷��� �ʱ�ȭ


	int enemyHP = battler2->GetHP();//���� hp�� �ʱ�ȭ
	int enemyMP = battler2->GetMP();//���� mp�� �ʱ�ȭ
	int enemyATT = battler2->GetStrikingPower();//���� ���ݷ��� �ʱ�ȭ
	int enemyAMOR = battler2->GetDefensivePower();//���� ������ �ʱ�ȭ
	int ememyACC = battler2->GetAccuracy();//���� ���߷��� �ʱ�ȭ
	shared_ptr<std::string> enemy = battler2->GetName();//���̸� ���������

	cout << "<<-= ���� ���� =->>" << endl;//���� ������ ���� ǥ�� �ؽ�Ʈ
	
	while (1)
	{
		int Damage;//���ط� 
		
		Damage = (playerATT - (enemyAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);//���ط� ����

		enemyHP = enemyHP - Damage;
		cout << *enemy << " ��(��) �����ߴ�. ������ [" << Damage << "] �� ������." << endl;
		SkipableSleep(2000);
		cout << *enemy << " �� ü���� [" << enemyHP << "] ���Ҵ�." << endl;

		if (enemyHP <= 0)//���� �׾�����
		{
			cout <<*enemy<< " ��(��) �׿���." << endl << "������ ��� �����ұ�?" << endl;

			ConsoleOption battleMenu = ConsoleOption(
			{
				"��",

				"�ƴϿ�",
			},
				34, 20, 11);

			switch (battleMenu.GetSelect())
			{
			case 0://�������� ������
				GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
				break;
			case 1://���θ޴��� Ż��
				GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
				break;
			}
			break;
			//������ ����
		}

		Damage = (enemyATT - (playerAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);

		playerHP = playerHP - Damage;
		cout << *enemy << " �� ������ �޾Ҵ�. ������ [" << Damage << "] �� �Ծ���." << endl;
		SkipableSleep(2000);
		cout << "���� ü���� [" << playerHP << "] ���Ҵ�." << endl;


		if (playerHP <= 0)//�÷��̾ �׾�����
		{
			//�� ȣ��
			GetGame()->GetSceneManager()->SetNextScene(std::make_shared<GameoverScene>(GetGame()));
			//���ڵ� 
			break;
		}
	}
}

void BattleScene::ItemGet()
{

}

