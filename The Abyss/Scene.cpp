#include "stdafx.h"
#include "Scene.h"
#include "SceneManager.h"


Scene::Scene(std::weak_ptr<Game> game)
{
	this->game = game;
}

void Scene::Run()
{
}


Scene::~Scene()
{
}
