#include <iostream>
#include "GameManager.h"
#include "StartupState.h"
#include "TitleState.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "ResultState.h"

int main()
{
	GameManager manager(std::make_unique<StartupState>());

	while (1)
	{
		manager.Update(0.0f);
	}
}