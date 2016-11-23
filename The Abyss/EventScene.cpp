#include "stdafx.h"
#include "EventScene.h"
#include "Scene.h"


EventScene::EventScene(std::weak_ptr<Game> game) :Scene(game)
{

}


EventScene::~EventScene()
{

}

void EventScene::Run()
{
	EventRand = rand() % 10 + 1;

	switch (EventRand)
	{
	case 1:
	{
		std::cout << "윤석현교수님(을)를 발견하였습니다." <<
			std::endl << "아무 쓸모 없어보인다..";
	}break;
	case 2:
	{
		std::cout << "윤석현 교수님의 청동석상을 발견하였습니다." << 
			std::endl << "눈호강(갱)이 되었습니다.";
	}break;
	case 3:
	{
		GameTimeRand = rand()%24 + 0;
		std::cout << "지금은..%d시네요." << GameTimeRand << 
			std::endl << "강의 시작할 시간 같네요^^";
	}break;
	case 4:
	{
		std::cout << "던전에서 혼자라 너무 외로운거같다.";
	}break;
	case 5:
	{
		std::cout << "주인공은 집에 가고싶어하는 눈치인거같다.";
	}break;
	case 6:
	{
		std::cout << "손소독제를 발견하셨습니다." << 
			std::endl << "손이 깨끗해지는 기분이든다.";
	}break;
	case 7:
	{
		std::cout << "주인공은 춤을 춥니다.";
	}break;
	case 8:
	{
		std::cout << "주인공은 그림을 그리고 싶어합니다.";
	}break;
	case 9:
	{
		std::cout << "주인공은 프로그래밍을 좋아합니다.";
	}break;
	case 10:
	{
		std::cout << "주인공은 기획을 좋아합니다.";
	}break;


	}

}
