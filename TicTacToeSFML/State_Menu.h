#pragma once

#include "State.h"
#include "Menu_Main.h"
class State_Menu
	: public State
{
	sf::Font m_font;

	sf::Texture m_backgroundTexture;
	sf::RectangleShape m_background;

	sf::ConvexShape m_logoBox;
	sf::Text m_logo;

	sf::RectangleShape m_menuBackground;

	Menu_Main m_mainMenu;

	int m_activeButton;

public:
	State_Menu();
	~State_Menu();

	void Initialize(sf::RenderWindow* _window);

	void Update(sf::RenderWindow* _window);
	void Render(sf::RenderWindow* _window);

	void Destroy();
};

