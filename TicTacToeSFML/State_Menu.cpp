#include "State_Menu.h"



State_Menu::State_Menu()
{
}


State_Menu::~State_Menu()
{
}

void State_Menu::Initialize(sf::RenderWindow* _window)
{
	m_backgroundTexture.loadFromFile("Resources/Textures/tictactoeBackground.jpg");
	m_font.loadFromFile("Resources/Fonts/BNT.ttf");

	m_background.setPosition(0.0f, 0.0f);
	m_background.setSize(sf::Vector2f(_window->getSize()));
	m_background.setTexture(&m_backgroundTexture);

	m_logoBox.setPointCount(4);
	m_logoBox.setPoint(0, sf::Vector2f(150.0f, 0.0f));
	m_logoBox.setPoint(1, sf::Vector2f(650.0f, 0.0f));
	m_logoBox.setPoint(2, sf::Vector2f(570.0f, 80.0f));
	m_logoBox.setPoint(3, sf::Vector2f(230.0f, 80.0f));
	m_logoBox.setOutlineThickness(5.0f);
	m_logoBox.setOutlineColor(sf::Color(15, 15, 15));
	m_logoBox.setFillColor(sf::Color(60, 60, 60, 250));

	m_logo.setFont(m_font);
	m_logo.setCharacterSize(64u);
	m_logo.setString("Tic Tac Toe");
	m_logo.setOrigin(m_logo.getGlobalBounds().width / 2.0f, m_logo.getGlobalBounds().height / 2.0f);
	m_logo.setPosition(m_logoBox.getGlobalBounds().left + m_logoBox.getGlobalBounds().width / 2.0f, m_logoBox.getGlobalBounds().top + m_logoBox.getGlobalBounds().height / 2.0f - 15.0f);

	m_menuBackground.setSize(sf::Vector2f(340.0f, 470.0f));
	m_menuBackground.setPosition(230.0f, 85.0f);
	m_menuBackground.setOutlineThickness(3.0f);
	m_menuBackground.setOutlineColor(sf::Color(15, 15, 15));
	m_menuBackground.setFillColor(sf::Color(75, 75, 75, 200));

	m_mainMenu.Initialize(_window);
}

void State_Menu::Update(sf::RenderWindow* _window)
{
	m_mainMenu.Update(_window);
}

void State_Menu::Render(sf::RenderWindow* _window)
{
	_window->draw(m_background);

	_window->draw(m_logoBox);
	_window->draw(m_logo);

	_window->draw(m_menuBackground);

	m_mainMenu.Render(_window);
}

void State_Menu::Destroy()
{
	m_mainMenu.Destroy();
}
