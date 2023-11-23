#pragma once

#include <SFML/Graphics.hpp>

#include "StateManager.h"
#include "State_Menu.h"

class System
{
	sf::RenderWindow m_window;

	StateManager m_stateManager;

public:
	System();
	~System();

	bool Initialize();
	void Run();
	void Release();
};

