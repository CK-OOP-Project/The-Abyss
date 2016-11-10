#pragma once
#include "Game.h"
#include <memory>
class Scene
{
public:
	Scene(std::weak_ptr<Game> game);
	virtual void Run();
	virtual ~Scene();

	std::shared_ptr<Game> GetGame() { return game.lock(); };
private:
	std::weak_ptr<Game> game;
};

