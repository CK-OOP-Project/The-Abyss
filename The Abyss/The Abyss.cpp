// The Abyss.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

