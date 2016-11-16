#pragma once
#include<memory>
#include "Scene.h"
#include "Battler.h"
class BattleScene :
	public Scene
{

public:
	BattleScene(std::weak_ptr<Game> game, 
		std::shared_ptr<Battler>battler1, 
		std::shared_ptr<Battler>battler2);
	virtual ~BattleScene();
	virtual void Run();
	void Battle(); 
	void ItemGet();
private:
	std::shared_ptr<Battler> battler1, battler2;
};

