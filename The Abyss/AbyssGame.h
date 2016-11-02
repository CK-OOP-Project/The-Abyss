#pragma once
#include "stdafx.h"
#include "Game.h"
#include "PlayerData.h"
#include "MainScene.h"
class AbyssGame :
	public Game
{
	std::shared_ptr<PlayerData> playerData;
public:
	AbyssGame();
	virtual ~AbyssGame();

	std::shared_ptr<PlayerData> GetPlayerData() { return playerData; };
	void SetPlayerData(std::shared_ptr<PlayerData> value) { this->playerData = value; };

	virtual void Run();
};

