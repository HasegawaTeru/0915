#include <iostream>
#include "GameManager.h"
#include "TitleState.h"

GameManager manager;

int main()
{
	manager.ChangeState(std::make_unique < TitleState>());

	while (1)
	{
		manager.Update(0.1f);
	}
}