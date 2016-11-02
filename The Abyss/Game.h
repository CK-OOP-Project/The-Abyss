#pragma once
#include "SceneManager.h"

class Game : public std::enable_shared_from_this<Game>
{
	SceneManager sceneManager;
public:
	Game();
	virtual ~Game();
	SceneManager* GetSceneManager() { return &sceneManager; };

	virtual void Run();
};

