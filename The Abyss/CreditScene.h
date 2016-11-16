#pragma once
#include "Scene.h"
class CreditScene :
	public Scene
{
public:
	CreditScene(std::weak_ptr<Game> game);
	virtual ~CreditScene();

	virtual void Run();
};

