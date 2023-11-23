#pragma once

#include "State.h"

class StateManager
{
	State* m_currentState;

	sf::RenderWindow* m_window;

public:
	StateManager();
	~StateManager();

	void SetState(State* _state);
	void SetWindow(sf::RenderWindow* _window) { m_window = _window; }

	State* GetState() const { return m_currentState; }

	void Render(sf::RenderWindow* _window);
	void Update(sf::RenderWindow* _window);
};

