#include "pch.h"

ConditionPlayerDefender::ConditionPlayerDefender()
{
}

ConditionPlayerDefender::~ConditionPlayerDefender()
{
}

bool ConditionPlayerDefender::Test(Player* player)
{
	if (GameManager::Get()->getBall()->getOwner() == nullptr)
	{
		return false;
	}

	Player* owner = GameManager::Get()->getBall()->getOwner();
	bool ownerIsBlack = GameManager::Get()->getBall()->getOwner()->isBlack();
	bool playerIsBlack = player->isBlack();

	if (ownerIsBlack == playerIsBlack && owner != player && player->GetIsDefender())
	{
		return true;
	}
	return false;
}
