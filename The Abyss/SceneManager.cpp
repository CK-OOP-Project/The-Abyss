#include "stdafx.h"
#include "SceneManager.h"
#include "Scene.h"

SceneManager::SceneManager()
{
}


void SceneManager::Run()
{
	while (true)
	{
		if (nextScene != 0)
		{
			currentScene = nextScene;
			nextScene = 0;
		}
		else
			break;
		currentScene->Run();
	}
}

SceneManager::~SceneManager()
{
}
