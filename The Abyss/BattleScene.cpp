#include "stdafx.h"

#include "BattleScene.h"
//연결된 씬 파일
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
		GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
		break;
	case 1://전투 함수를 실행합니다.
		Battle();
		break;
	}
	//플레이어 스탯 값 초기화 (맥스)

}

void BattleScene::Battle()
{
	USING;
	Console::Clear();
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
	shared_ptr<std::string> enemy = battler2->GetName();//적이름 가지고오기

	cout << "<<-= 전투 시작 =->>" << endl;//전투 시퀸스 돌입 표시 텍스트
	
	while (1)
	{
		int Damage;//피해량 
		
		Damage = (playerATT - (enemyAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);//피해량 공식

		enemyHP = enemyHP - Damage;
		cout << *enemy << " 을(를) 공격했다. 데미지 [" << Damage << "] 를 입혔다." << endl;
		SkipableSleep(2000);
		cout << *enemy << " 의 체력이 [" << enemyHP << "] 남았다." << endl;

		if (enemyHP <= 0)//적이 죽었을때
		{
			cout <<*enemy<< " 을(를) 죽였다." << endl << "던전을 계속 진행할까?" << endl;

			ConsoleOption battleMenu = ConsoleOption(
			{
				"예",

				"아니오",
			},
				34, 20, 11);

			switch (battleMenu.GetSelect())
			{
			case 0://던전으로 재진입
				GetGame()->GetSceneManager()->SetNextScene(DungeonScene::GetInstance(GetGame()));
				break;
			case 1://메인메뉴로 탈출
				GetGame()->GetSceneManager()->SetNextScene(std::make_shared<MainScene>(GetGame()));
				break;
			}
			break;
			//아이템 습득
		}

		Damage = (enemyATT - (playerAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);

		playerHP = playerHP - Damage;
		cout << *enemy << " 의 공격을 받았다. 데미지 [" << Damage << "] 를 입었다." << endl;
		SkipableSleep(2000);
		cout << "나의 체력이 [" << playerHP << "] 남았다." << endl;


		if (playerHP <= 0)//플레이어가 죽었을때
		{
			//씬 호출
			GetGame()->GetSceneManager()->SetNextScene(std::make_shared<GameoverScene>(GetGame()));
			//레코드 
			break;
		}
	}
}

void BattleScene::ItemGet()
{

}

