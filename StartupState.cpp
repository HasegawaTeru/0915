#include <iostream>
#include "GameManager.h"
#include "StartupState.h"
#include "TitleState.h"

void StartupState::OnEnter(GameManager* manager)
{
	
}

void StartupState::OnUpdate(GameManager* manager, float deltaTime)
{

}

void StartupState::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string StartupState::GetName() const
{
	return "StartupState";
}