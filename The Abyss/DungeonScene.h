#pragma once
#include<memory>
#include <iostream>
#include "Scene.h"
#include "AbyssGame.h"
#include "BattleScene.h"

class DungeonScene :
	public Scene
{

public:
	DungeonScene(std::weak_ptr<Game> game);
	virtual ~DungeonScene();
	void printStatus();
	virtual void Run();

	static std::shared_ptr<DungeonScene> GetInstance(std::shared_ptr<Game> game = 0);
private:
	int Floor;//��
	int Event;//���������� ��Ȳ
	bool endFloor;//���� ������ �Ѿ�� �� �̹����� ���� �˸��� ��

	static std::shared_ptr<DungeonScene> instance;
};

