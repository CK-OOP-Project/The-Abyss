#pragma once
class Status
{
public:
	Status();
	Status(int strength, int intelligence, int dexterity, int constitution);
	// 공격력
	int strength;
	// 마력
	int intelligence;
	// 민첩성
	int dexterity;
	// 생명력
	int constitution;
};

