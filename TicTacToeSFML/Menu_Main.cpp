#include "Menu_Main.h"


Menu_Main::Menu_Main()
{
}

Menu_Main::~Menu_Main()
{
}

void Menu_Main::Initialize(sf::RenderWindow* _window)
{
	m_font.loadFromFile("Resources/Fonts/BNT.ttf");

	unsigned int fontSize = 40u;

	// Option1 Button: START
	m_option1.setOutlineThickness(3.0f);
	m_option1.setOutlineColor(sf::Color(15, 15, 15));
	m_option1.setFillColor(sf::Color(45, 45, 45));
	m_option1.setSize(sf::Vector2f(280.0f, 60.0f));
	m_option1.setPosition(260.0f, 110.0f);

	m_option1Text.setFont(m_font);
	m_option1Text.setCharacterSize(fontSize);
	m_option1Text.setString("1 Player");
	m_option1Text.setOrigin(m_option1Text.getGlobalBounds().width / 2.0f, m_option1Text.getGlobalBounds().height / 2.0f);
	m_option1Text.setPosition(m_option1.getGlobalBounds().left + m_option1.getGlobalBounds().width / 2.0f, m_option1.getGlobalBounds().top + m_option1.getGlobalBounds().height / 2.8f);
	/// Option1 Button: END

	// Option2 Button: START
	m_option2.setOutlineThickness(3.0f);
	m_option2.setOutlineColor(sf::Color(15, 15, 15));
	m_option2.setFillColor(sf::Color(45, 45, 45));
	m_option2.setSize(sf::Vector2f(280.0f, 60.0f));
	m_option2.setPosition(260.0f, 190.0f);

	m_option2Text.setFont(m_font);
	m_option2Text.setCharacterSize(fontSize);
	m_option2Text.setString("2 Players");
	m_option2Text.setOrigin(m_option2Text.getGlobalBounds().width / 2.0f, m_option2Text.getGlobalBounds().height / 2.0f);
	m_option2Text.setPosition(m_option2.getGlobalBounds().left + m_option2.getGlobalBounds().width / 2.0f, m_option2.getGlobalBounds().top + m_option2.getGlobalBounds().height / 2.8f);
	/// Option2 Button: END

	// Option3 Button: START
	m_option3.setOutlineThickness(3.0f);
	m_option3.setOutlineColor(sf::Color(15, 15, 15));
	m_option3.setFillColor(sf::Color(45, 45, 45));
	m_option3.setSize(sf::Vector2f(280.0f, 60.0f));
	m_option3.setPosition(260.0f, 295.0f);

	m_option3Text.setFont(m_font);
	m_option3Text.setCharacterSize(fontSize);
	m_option3Text.setString("Settings");
	m_option3Text.setOrigin(m_option3Text.getGlobalBounds().width / 2.0f + 20.0f, m_option3Text.getGlobalBounds().height / 2.0f);
	m_option3Text.setPosition(m_option3.getGlobalBounds().left + m_option3.getGlobalBounds().width / 2.0f + 20.0f, m_option3.getGlobalBounds().top + m_option3.getGlobalBounds().height / 2.8f);
	/// Option3 Button: END

	// Option4 Button: START
	m_option4.setOutlineThickness(3.0f);
	m_option4.setOutlineColor(sf::Color(15, 15, 15));
	m_option4.setFillColor(sf::Color(45, 45, 45));
	m_option4.setSize(sf::Vector2f(280.0f, 60.0f));
	m_option4.setPosition(260.0f, 400.0f);

	m_option4Text.setFont(m_font);
	m_option4Text.setCharacterSize(fontSize);
	m_option4Text.setString("Exit");
	m_option4Text.setOrigin(m_option4Text.getGlobalBounds().width / 2.0f + 20.0f, m_option4Text.getGlobalBounds().height / 2.0f);
	m_option4Text.setPosition(m_option4.getGlobalBounds().left + m_option4.getGlobalBounds().width / 2.0f + 25.0f, m_option4.getGlobalBounds().top + m_option4.getGlobalBounds().height / 2.5f);
	/// Option4 Button: END

	m_activeButton = 1;
}

void Menu_Main::Update(sf::RenderWindow* _window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Tab))
	{
		m_activeButton++;

		if (m_activeButton > 4)
			m_activeButton = 1;
	}
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Tab))
	{
		;
	}

	// Hover switch: START
	switch (m_activeButton)
	{
	case 1:
	{
		m_option1.setFillColor(sf::Color(150, 45, 45));
		m_option2.setFillColor(sf::Color(45, 45, 45));
		m_option3.setFillColor(sf::Color(45, 45, 45));
		m_option4.setFillColor(sf::Color(45, 45, 45));
	} break;

	case 2:
	{
		m_option1.setFillColor(sf::Color(45, 45, 45));
		m_option2.setFillColor(sf::Color(150, 45, 45));
		m_option3.setFillColor(sf::Color(45, 45, 45));
		m_option4.setFillColor(sf::Color(45, 45, 45));
	} break;

	case 3:
	{
		m_option1.setFillColor(sf::Color(45, 45, 45));
		m_option2.setFillColor(sf::Color(45, 45, 45));
		m_option3.setFillColor(sf::Color(150, 45, 45));
		m_option4.setFillColor(sf::Color(45, 45, 45));
	} break;

	case 4:
	{
		m_option1.setFillColor(sf::Color(45, 45, 45));
		m_option2.setFillColor(sf::Color(45, 45, 45));
		m_option3.setFillColor(sf::Color(45, 45, 45));
		m_option4.setFillColor(sf::Color(150, 45, 45));
	} break;

	default:
		break;
	}
	/// Hover switch: END

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return))
	{
		switch (m_activeButton)
		{
		case 1:
		{
			m_option1.setFillColor(sf::Color(150, 150, 45));

		} break;

		case 2:
		{
			m_option2.setFillColor(sf::Color(150, 150, 45));
		} break;

		case 3:
		{
			m_option3.setFillColor(sf::Color(150, 150, 45));
		} break;

		case 4:
		{
			g_exit = true;
		} break;

		default:
			break;
		}
	}
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Tab))
	{
		;
	}
}

void Menu_Main::Render(sf::RenderWindow* _window)
{
	_window->draw(m_option1);
	_window->draw(m_option1Text);

	_window->draw(m_option2);
	_window->draw(m_option2Text);

	_window->draw(m_option3);
	_window->draw(m_option3Text);

	_window->draw(m_option4);
	_window->draw(m_option4Text);
}

void Menu_Main::Destroy()
{

}
