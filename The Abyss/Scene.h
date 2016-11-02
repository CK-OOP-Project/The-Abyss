#pragma once
#include "stdafx.h"
#include "Game.h"
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

