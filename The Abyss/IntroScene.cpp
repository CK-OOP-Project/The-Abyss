#include "stdafx.h"
#include "IntroScene.h"

#include "sleep.h"

#include "PlayerCreateScene.h"


IntroScene::IntroScene(std::weak_ptr<Game> game)
	:Scene(game)
{
}


IntroScene::~IntroScene()
{
}

void IntroScene::Run()
{
	using namespace std;
	using namespace SteamB23;
	Console::SetTitle(TEXT("The Abyss - 서장"));
	Console::Clear();

	ShowStory();
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<PlayerCreateScene>(GetGame()));
}

void IntroScene::ShowStory()
{
	using namespace std;
	using namespace SteamB23;
	SkipableSleep(1000);
	cout << "마왕과 그의 하수인들이 봉인되었다는 저주받은 심연." << endl;
	SkipableSleep(5000);
	cout << endl << "그 끝을 알 수 없는 심연에는 마왕을 쓰러뜨리고 힘을 흡수 할 수 있는 반지가" << endl << "있다고 한다." << endl;
	SkipableSleep(5000);
	cout << endl << "강력한 힘을 갈망했던 당신은 심연의 위치를 수소문하여 불가사의한 돌이 원을" << endl << "이루는 장소에 도착했다." << endl;
	SkipableSleep(5000);
	cout << endl << "그 자리에서 당신이 알아냈던 주문을 외우자 갑자기 땅이 흔들리더니 꺼지기" << endl << "시작했다..." << endl;
}
