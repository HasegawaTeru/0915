#include <iostream>
#include "GameManager.h"
#include "MainMenuState.h"
#include "TitleState.h"

void MainMenuState::OnEnter(GameManager* manager)
{
	std::cout << "ƒƒjƒ…[‰æ–Ê" << std::endl;
}

void MainMenuState::OnUpdate(GameManager* manager, float deltaTime)
{

}

void MainMenuState::OnExit(GameManager* manager)
{
	std::cout << "‰Šú‰»Š®—¹" << std::endl;
}

const std::string MainMenuState::GetName() const
{
	return "MainMenuState";
}