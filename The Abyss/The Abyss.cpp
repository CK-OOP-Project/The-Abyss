// The Abyss.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << "예외가 발생하였습니다." << endl;
		cout << ex.what() << endl;
	}
	catch (...){
		cout << "알 수 없는 예외가 발생하였습니다." << endl;
	}
}

