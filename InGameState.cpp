#include <iostream>
#include "GameManager.h"
#include "InGameState.h"
#include "TitleState.h"

void InGameState::OnEnter(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€’†" << std::endl;
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime)
{

}

void InGameState::OnExit(GameManager* manager)
{
	std::cout << "‰Šú‰»Š®—¹" << std::endl;
}

const std::string InGameState::GetName() const
{
	return "InGameState";
}