// The Abyss.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Game.h"
#include "AbyssGame.h"

using namespace std;

int main()
{
	shared_ptr<Game> game(make_shared<AbyssGame>());
	game->Run();
}

