#include <iostream>
#include "GameManager.h"
#include "StartupState.h"
#include "TitleState.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "ResultState.h"

GameManager manager;

int main()
{
	manager.ChangeState(std::make_unique<StartupState>());

	while (1)
	{
		manager.Update(0.0f);
	}
}