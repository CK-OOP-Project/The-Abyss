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
		std::cout << "������������(��)�� �߰��Ͽ����ϴ�." <<
			std::endl << "�ƹ� ���� ����δ�..";
	}break;
	case 2:
	{
		std::cout << "������ �������� û�������� �߰��Ͽ����ϴ�." << 
			std::endl << "��ȣ��(��)�� �Ǿ����ϴ�.";
	}break;
	case 3:
	{
		GameTimeRand = rand()%24 + 0;
		std::cout << "������..%d�ó׿�." << GameTimeRand << 
			std::endl << "���� ������ �ð� ���׿�^^";
	}break;
	case 4:
	{
		std::cout << "�������� ȥ�ڶ� �ʹ� �ܷο�Ű���.";
	}break;
	case 5:
	{
		std::cout << "���ΰ��� ���� ����;��ϴ� ��ġ�ΰŰ���.";
	}break;
	case 6:
	{
		std::cout << "�ռҵ����� �߰��ϼ̽��ϴ�." << 
			std::endl << "���� ���������� ����̵��.";
	}break;
	case 7:
	{
		std::cout << "���ΰ��� ���� ��ϴ�.";
	}break;
	case 8:
	{
		std::cout << "���ΰ��� �׸��� �׸��� �;��մϴ�.";
	}break;
	case 9:
	{
		std::cout << "���ΰ��� ���α׷����� �����մϴ�.";
	}break;
	case 10:
	{
		std::cout << "���ΰ��� ��ȹ�� �����մϴ�.";
	}break;


	}

}
