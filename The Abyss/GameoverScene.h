#pragma once
#include "Scene.h"
class GameoverScene :
	public Scene
{
public:
	GameoverScene(std::weak_ptr<Game> game);
	virtual ~GameoverScene();
	virtual void Run();
};

