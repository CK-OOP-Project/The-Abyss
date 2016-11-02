#pragma once
#include "stdafx.h"
#include "Scene.h"
#include "Game.h"
class IntroScene :
	public Scene
{
public:
	IntroScene(std::weak_ptr<Game> game);
	~IntroScene();
	virtual void Run();
	void ShowStory();
};

