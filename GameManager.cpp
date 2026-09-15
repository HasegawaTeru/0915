#include "GameManager.h"
#include "GameState.h"
#include "StartupState.h"

GameManager::GameManager(std::unique_ptr<GameState>initialState) : isRunning(true), gameTime(0.0), currentState(std::move(initialState))
{
	
}

void GameManager::ChangeState(std::unique_ptr<GameState>newState)
{
	if (currentState)
	{
		currentState->OnExit(this);
	}

	currentState = std::move(newState);
	currentState->OnEnter(this);
}

void GameManager::Update(float deltaTime)
{
	gameTime += deltaTime;

	if (currentState)
	{
		currentState->OnUpdate(this, deltaTime);
	}
}