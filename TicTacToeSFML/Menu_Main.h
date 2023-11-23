#pragma once

#include "MenuPage.h"

class Menu_Main
	: public MenuPage
{
	int m_activeButton;

	sf::Font m_font;

	sf::RectangleShape m_option1;
	sf::Text m_option1Text;

	sf::RectangleShape m_option2;
	sf::Text m_option2Text;

	sf::RectangleShape m_option3;
	sf::Text m_option3Text;

	sf::RectangleShape m_option4;
	sf::Text m_option4Text;

public:
	Menu_Main();
	~Menu_Main();

	void Initialize(sf::RenderWindow* _window);

	void Update(sf::RenderWindow* _window);
	void Render(sf::RenderWindow* _window);

	void Destroy();
};

extern bool g_exit;
