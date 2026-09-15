#include <iostream>
#include "conio.h"
#include "GameManager.h"
#include "InGameState.h"
#include "ResultState.h"

void InGameState::OnEnter(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€’†" << std::endl;
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime)
{
	(void)_getch();
	manager->ChangeState(std::make_unique<ResultState>());
}

void InGameState::OnExit(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€I—¹" << std::endl;
}

const std::string InGameState::GetName() const
{
	return "InGameState";
}