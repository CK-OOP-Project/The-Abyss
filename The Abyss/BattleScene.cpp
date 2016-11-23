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

	
	//플레이어 hp를 초기화
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
	

	int textRand = rand() % 10;
	SteamB23::Console::SetForegroundColor(ConsoleColor::Red);

	switch (textRand) {
	case 0:
		cout << *enemy << "이(가) 크게 울부 짖었다." << endl;
			break;
	case 1:
		cout << *enemy << "이(가) 사랑스러운 눈빛으로 나를 바라본다.." << endl;
		break;
	case 2:
		cout << *enemy << "이(가) 굶주려하며 입맛을 다신다.." << endl;
		break;
	case 3:
		cout << *enemy << "이(가) 벌벌 떨며 나를 보고 겁먹고 있다." << endl;
		break;
	case 4:
		cout << *enemy << "이(가) 나에게 친근하게 다가온다." << endl;
		break;
	case 5:
		cout << *enemy << "이(가) 쿨쿨 잠들어있다." << endl;
		break;
	case 6:
		cout << *enemy << "이(가) 무시 하고 있다." << endl;
		break;
	case 7:
		cout << *enemy << "이(가) 크게 울부 짖었다." << endl;
		break;
	case 8:
		cout << *enemy << "이(가) 혼란한 모습으로 섹시하게 유혹하고있다.." << endl;
		break;
	case 9:
		cout << *enemy << "이(가) 무서운 모습으로 쿵쾅거리며 춤을 추고있다." << endl;
		break;

	}
	Console::ResetColor();
	cout << *enemy << " 은(는) 체력이 [" << enemyHP << "] 있다." << endl;
	cout << "플레이어의 hp는 [" << battler1->GetCurrentHP() << "] 남았다." << endl;
	SkipableSleep(8000);
	while (1)
	{
		

		int Damage;//피해량 
		
		Damage = (playerATT - (enemyAMOR / 10)) * ((float)rand() / RAND_MAX + 0.5);//피해량 공식

		enemyHP = enemyHP - Damage;
		cout << *enemy << " 을(를) 공격했다. 데미지 [" << Damage << "] 를 입혔다." << endl;
		SkipableSleep(8000);
		cout << *enemy << " 의 체력이 [" << enemyHP << "] 남았다." << endl;
		SkipableSleep(8000);

		if (enemyHP <= 0)//적이 죽었을때
		{
			Console::Clear();
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

		battler1->SetCurrentHP( battler1->GetCurrentHP() - Damage);//데미지 공식
		cout << *enemy << " 의 공격을 받았다. 데미지 [" << Damage << "] 를 입었다." << endl;
		SkipableSleep(8000);
		cout << "나의 체력이 [" << battler1->GetCurrentHP() << "] 남았다." << endl;
		SkipableSleep(8000);

		if (battler1->GetCurrentHP() <= 0)//플레이어가 죽었을때
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

