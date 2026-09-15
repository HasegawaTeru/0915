#include <iostream>
#include "conio.h"
#include "GameManager.h"
#include "ResultState.h"
#include "MainMenuState.h"

void ResultState::OnEnter(GameManager* manager)
{
	std::cout << "ゲーム結果" << std::endl;
}

void ResultState::OnUpdate(GameManager* manager, float deltaTime)
{
	(void)_getch();
	manager->ChangeState(std::make_unique<MainMenuState>());
}

void ResultState::OnExit(GameManager* manager)
{
	std::cout << "リザルト終了" << std::endl;
}

const std::string ResultState::GetName() const
{
	return "ResultState";
}