#pragma once
#include <memory>
#include "Game.h"
#include "PlayerData.h"
#include "MainScene.h"
class AbyssGame :
	public Game
{
	std::shared_ptr<PlayerData> playerData;
    int killCounter;
public:
	AbyssGame();
	virtual ~AbyssGame();

	std::shared_ptr<PlayerData> GetPlayerData() { return playerData; };
	void SetPlayerData(std::shared_ptr<PlayerData> value) { this->playerData = value; };

    int GetKillCounter();
    void SetKillCounter(int value);

	virtual void Run();
};

