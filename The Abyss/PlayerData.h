#pragma once
#include "stdafx.h"
#include "Status.h"
class PlayerData
{
	std::shared_ptr<Status> status;
public:
	PlayerData();
	~PlayerData();

	std::shared_ptr<Status> GetStatus() { return status; };
};

