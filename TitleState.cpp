#include <iostream>
#include "TitleState.h"
#include "conio.h"

void TitleState::OnEnter(GameManager* manager)
{
	std::cout << "タイトル画面" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime)
{
	(void)_getch();
	
}

void TitleState::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string TitleState::GetName() const
{
	return "TitleState";
}