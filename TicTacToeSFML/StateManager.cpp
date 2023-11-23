#include "StateManager.h"

StateManager::StateManager()
{
	m_window = NULL;
	m_currentState = NULL;
}

StateManager::~StateManager()
{
	m_window = NULL;
	if (m_currentState != NULL)
	{
		m_currentState->Destroy();
		delete m_currentState;
	}
}

void StateManager::SetState(State* _state)
{
	if (m_currentState != NULL)
	{
		m_currentState->Destroy();
		delete m_currentState;
	}
	m_currentState = _state;

	if (m_currentState != NULL)
		m_currentState->Initialize(m_window);
}

void StateManager::Render(sf::RenderWindow* _window)
{
	m_currentState->Render(_window);
}

void StateManager::Update(sf::RenderWindow* _window)
{
	m_currentState->Update(_window);
}
