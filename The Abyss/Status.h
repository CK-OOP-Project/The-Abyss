#pragma once
class Status
{
	int strength;
	int intelligence;
	int dexterity;
	int constitution;
public:
	Status();
	~Status();
	
	int GetStrength() { return strength; };
	int GetIntelligence() { return intelligence; };
	int GetDexterity() { return dexterity; };
	int GetConstitution() { return constitution; };
	void SetStrength(int value) { strength = value; };
	void SetIntelligence(int value) { intelligence = value; };
	void SetDexterity(int value) { dexterity = value; };
	void SetConstitution(int value) { constitution = value; };
};
