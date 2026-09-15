#include <iostream>
#include "conio.h"
#include "GameManager.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "TitleState.h"

void MainMenuState::OnEnter(GameManager* manager)
{
	std::cout << "メインメニュー" << std::endl;
}

void MainMenuState::OnUpdate(GameManager* manager, float deltaTime)
{
	int i = _getch();
	if (i == '1')
	{
		manager->ChangeState(std::make_unique<InGameState>());
	}
	else
	{
		manager->ChangeState(std::make_unique<TitleState>());
	}
}

void MainMenuState::OnExit(GameManager* manager)
{
	std::cout << "メインメニュー画面終了" << std::endl;
}

const std::string MainMenuState::GetName() const
{
	return "MainMenuState";
}