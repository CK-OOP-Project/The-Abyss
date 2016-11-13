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
	using namespace SteamB23;//콘솔옵션 관련 사용자 정의 헤더
	using namespace std;
	ConsoleOption battleMenu = ConsoleOption(
	{
		"도 주",
		"전 투",
	},
		34, 10,11 );

	switch (battleMenu.GetSelect())
	{
	case 0://back
		/*sceneManager->SetNextScene(std::make_shared<IntroScene>(GetGame()));
		return;*/
	case 1://전투 함수를 실행합니다.
		Battle();
	}
	//플레이어 스탯 값 초기화 (맥스)

}

void BattleScene::Battle()
{
	using namespace SteamB23;//콘솔옵션 관련 사용자 정의 헤더
	using namespace std;

	
	int playerHP = battler1->GetHP();//플레이어 hp를 초기화
	int playerMP = battler1->GetMP();//플레이어 mp를 초기화
	int playerATT = battler1->GetStrikingPower();//플레이어 공격력을 초기화
	int playerAMOR = battler1->GetDefensivePower();//플레이어 방어력을 초기화
	int playerACC = battler1->GetAccuracy();//플레이어 명중률을 초기화


	int enemyHP = battler2->GetHP();//적의 hp를 초기화
	int enemyMP = battler2->GetMP();//적의 mp를 초기화
	int enemyATT = battler2->GetStrikingPower();//적의 공격력을 초기화
	int enemyAMOR = battler2->GetDefensivePower();//적의 방어력을 초기화
	int ememyACC = battler2->GetAccuracy();//적의 명중률을 초기화

	cout << "<<-= 전투 시작 =->>" << endl;//전투 시퀸스 돌입 표시 텍스트
	
	while (1)
	{
		
		if (playerHP <= 0)//플레이어가 죽었을때
		{
			//씬 호출
		    //레코드 
		}


		if (enemyHP <= 0)//적이 죽었을때
		{
			//씬 호출
			//아이템 습득
		}


		int Damage;//피해량 
		Damage = (playerATT - (enemyAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);//피해량 공식

			enemyHP = enemyHP - Damage;
			cout << "적을 공격했다. 데미지 [" << Damage << "] 를 입혔다." << endl;
		    SkipableSleep(2000);
			cout << "적의 체력이 [" << enemyHP << "] 남았다." << endl;
        
	
		Damage = (enemyATT - (playerAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);

		    playerHP = playerHP - Damage;
		    cout << "적의 공격을 받았다. 데미지 [" << Damage << "] 를 입혔다." << endl;
			SkipableSleep(2000);
			cout << "나의 체력이 [" << playerHP << "] 남았다." << endl;
	}     

}

void BattleScene::ItemGet()
{

}

