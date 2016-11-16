#pragma once

#define USING using namespace std; using namespace SteamB23;

#include "Game.h"
#include <memory>
class Scene : public std::enable_shared_from_this<Scene>
{
public:
	Scene(std::weak_ptr<Game> game);
	virtual void Run();
	virtual ~Scene();

	std::shared_ptr<Game> GetGame() { return game.lock(); };
private:
	std::weak_ptr<Game> game;
};