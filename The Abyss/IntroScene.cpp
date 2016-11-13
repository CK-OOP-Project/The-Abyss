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
	Console::SetTitle(TEXT("The Abyss - ����"));
	Console::Clear();

	ShowStory();
	GetGame()->GetSceneManager()->SetNextScene(std::make_shared<PlayerCreateScene>(GetGame()));
}

void IntroScene::ShowStory()
{
	using namespace std;
	using namespace SteamB23;
	SkipableSleep(1000);
	cout << "���հ� ���� �ϼ��ε��� ���εǾ��ٴ� ���ֹ��� �ɿ�." << endl;
	SkipableSleep(5000);
	cout << endl << "�� ���� �� �� ���� �ɿ����� ������ �����߸��� ���� ��� �� �� �ִ� ������" << endl << "�ִٰ� �Ѵ�." << endl;
	SkipableSleep(5000);
	cout << endl << "������ ���� �����ߴ� ����� �ɿ��� ��ġ�� ���ҹ��Ͽ� �Ұ������� ���� ����" << endl << "�̷�� ��ҿ� �����ߴ�." << endl;
	SkipableSleep(5000);
	cout << endl << "�� �ڸ����� ����� �˾Ƴ´� �ֹ��� �ܿ��� ���ڱ� ���� ��鸮���� ������" << endl << "�����ߴ�..." << endl;
}
