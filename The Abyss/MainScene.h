#pragma once
#include "stdafx.h"
#include "Scene.h"
#include "Game.h"
#include "ConsoleOption.h"
class MainScene :
	public Scene
{
	ConsoleText title = ConsoleText(
		"-=The Abyss=-",
		33, 5, 15,
		SteamB23::ConsoleColor::Red);
	ConsoleOption mainMenu = ConsoleOption(
	{
		"새 게임",
		"불러오기",
		"크레딧",
		"종료"
	},
		34, 10, 11);
public:
	MainScene(std::weak_ptr<Game> game);
	virtual void Run() override;
	virtual ~MainScene();
};

