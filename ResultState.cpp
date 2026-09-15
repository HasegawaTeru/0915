#include <iostream>
#include "GameManager.h"
#include "ResultState.h"
#include "TitleState.h"

void ResultState::OnEnter(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€‚Ì‰Šú‰»’†" << std::endl;
}

void ResultState::OnUpdate(GameManager* manager, float deltaTime)
{

}

void ResultState::OnExit(GameManager* manager)
{
	std::cout << "‰Šú‰»Š®—¹" << std::endl;
}

const std::string ResultState::GetName() const
{
	return "ResultState";
}