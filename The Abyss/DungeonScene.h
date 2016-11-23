#pragma once
#include<memory>
#include <iostream>
#include "Scene.h"
#include "AbyssGame.h"
#include "BattleScene.h"

class DungeonScene :
	public Scene
{

public:
	DungeonScene(std::weak_ptr<Game> game);
	virtual ~DungeonScene();
	void printStatus();
	virtual void Run();

	static std::shared_ptr<DungeonScene> GetInstance(std::shared_ptr<Game> game = 0);
private:
	int Floor;//층
	int Event;//던전에서의 상황
	bool endFloor;//다음 층으로 넘어가기 전 이번층의 끝을 알리는 값

	static std::shared_ptr<DungeonScene> instance;
};

