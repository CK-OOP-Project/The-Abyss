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

	virtual void Run();

private:
	int Floor;
	int Event;

};

