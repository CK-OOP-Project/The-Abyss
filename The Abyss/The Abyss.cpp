// The Abyss.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Game.h"
#include "AbyssGame.h"

using namespace std;

int main()
{
	try
	{
		shared_ptr<Game> game(make_shared<AbyssGame>());
		game->Run();
	}
	catch (exception& ex)
	{
		cout << "���ܰ� �߻��Ͽ����ϴ�." << endl;
		cout << ex.what() << endl;
	}
	catch (...){
		cout << "�� �� ���� ���ܰ� �߻��Ͽ����ϴ�." << endl;
	}
}

