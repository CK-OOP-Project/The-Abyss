#pragma once
#include "Scene.h"
class PlayerCreateScene :
	public Scene
{
public:
	PlayerCreateScene(std::weak_ptr<Game> game);
	virtual ~PlayerCreateScene();
	
	virtual void Run();
	void PlayerCreate();
	void print();
};

