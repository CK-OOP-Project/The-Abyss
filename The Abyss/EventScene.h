#pragma once
#include "Scene.h"

class EventScene :
	public Scene
{
public:
	EventScene(std::weak_ptr<Game> game);
	virtual ~EventScene();

	virtual void Run();

private:
	int EventRand;
	int	GameTimeRand;
};

