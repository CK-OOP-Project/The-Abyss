#include "stdafx.h"
#include "PlayerData.h"


PlayerData::PlayerData()
{
    status = std::make_shared<Status>();
}


PlayerData::~PlayerData()
{
}

std::shared_ptr<std::string> PlayerData::GetName()
{
    return std::make_shared<std::string>("플레이어");
}

int PlayerData::GetHP()
{
    int result = this->GetStatus()->constitution;
    for (int i = 0; i < 6; i++)
    {
        if (this->equipItems[i] != nullptr)
            result += this->equipItems[i]->GetProperty()->constitution;
    }
    return result;
}

int PlayerData::GetMP()
{
    int result = this->GetStatus()->intelligence;
    for (int i = 0; i < 6; i++)
    {
        if (this->equipItems[i] != nullptr)
            result += this->equipItems[i]->GetProperty()->intelligence;
    }
    return result;
}

int PlayerData::GetStrikingPower()
{
    int result = this->GetStatus()->intelligence;
    for (int i = 0; i < 6; i++)
    {
        if (this->equipItems[i] != nullptr)
            result += this->equipItems[i]->GetProperty()->strength;
    }
    return result;
}

int PlayerData::GetDefensivePower()
{
    int result = 0;
    for (int i = 0; i < 6; i++)
    {
        if (this->equipItems[i] != nullptr)
            result += this->equipItems[i]->GetDefensivePower();
    }
    return result;
}

int PlayerData::GetAccuracy()
{
    int result = this->GetStatus()->dexterity;
    for (int i = 0; i < 6; i++)
    {
        if (this->equipItems[i] != nullptr)
            result += this->equipItems[i]->GetProperty()->dexterity;
    }
    return result;
}

int PlayerData::GetCurrentHP()
{
    if (currentHP > GetHP())
        currentHP = GetHP();
    return currentHP;
}

void PlayerData::SetCurrentHP(int value)
{
    if (value > GetHP())
        value = GetHP();
    currentHP = value;
}
