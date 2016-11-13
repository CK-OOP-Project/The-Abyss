#include "stdafx.h"
#include "BattleScene.h"
#include "SceneManager.h"
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
	case 0:
		/*sceneManager->SetNextScene(std::make_shared<IntroScene>(GetGame()));
		return;*/
	case 1://���� �Լ��� �����մϴ�.
		Battle();
	}
	//�÷��̾� ���� �� �ʱ�ȭ (�ƽ�)

}

void BattleScene::Battle()
{
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

	cout << "<<-= ���� ���� =-" << endl;//���� ������ ���� ǥ�� �ؽ�Ʈ
	
	while (1)
	{
		
		if (playerHP <= 0)//�÷��̾ �׾�����
		{
			//�� ȣ��
		    //���ڵ� 
		}


		if (enemyHP <= 0)//���� �׾�����
		{
			//�� ȣ��
			//������ ����
		}


		int Damage;//���ط� 
		Damage = (playerATT - (enemyAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);//���ط� ����

			enemyHP = enemyHP - Damage;
			cout << "���� �����ߴ�. ������ [" << Damage << "] �� ������." << endl;
		    SkipableSleep(2000);
			cout << "���� ü���� [" << enemyHP << "] ���Ҵ�." << endl;
        
	
		Damage = (enemyATT - (playerAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);

		    playerHP = playerHP - Damage;
		    cout << "���� ������ �޾Ҵ�. ������ [" << Damage << "] �� ������." << endl;
			SkipableSleep(2000);
			cout << "���� ü���� [" << playerHP << "] ���Ҵ�." << endl;
	}     

}

void BattleScene::ItemGet()
{

}
