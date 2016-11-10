#pragma once
#include <memory>
class Scene;
class SceneManager
{
	std::shared_ptr<Scene> currentScene;
	std::shared_ptr<Scene> nextScene;
public:
	SceneManager();

	std::shared_ptr<Scene> GetCurrentScene() { return currentScene; };
	std::shared_ptr<Scene> GetNextScene() { return nextScene; };
	void SetNextScene(std::shared_ptr<Scene> value) { this->nextScene = value; };

	void Run();

	~SceneManager();
};

