#include <iostream>
#include "GameManager.h"
#include "StartupState.h"
#include "TitleState.h"

void StartupState::OnEnter(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€‚Ì‰Šú‰»’†" << std::endl;
}

void StartupState::OnUpdate(GameManager* manager, float deltaTime)
{
	
}

void StartupState::OnExit(GameManager* manager)
{
	std::cout << "‰Šú‰»Š®—¹" << std::endl;
}

const std::string StartupState::GetName() const
{
	return "StartupState";
}