#include "stdafx.h"
#include "Status.h"

Status::Status()
	:Status(0,0,0,0)
{
}

Status::Status(int strength, int intelligence, int dexterity, int constitution)
	:strength(strength),intelligence(intelligence), dexterity(dexterity), constitution(constitution)
{
}
