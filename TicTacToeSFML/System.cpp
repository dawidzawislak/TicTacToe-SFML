#include "System.h"

bool g_exit = false;

System::System()
{
}

System::~System()
{
}

bool System::Initialize()
{
	m_window.create(sf::VideoMode(800u, 500u), "Tic Tac Toe", sf::Style::Default);
	m_window.setFramerateLimit(60);


	m_stateManager.SetWindow(&m_window);
	m_stateManager.SetState(new State_Menu);

	return true;
}

void System::Run()
{
	while (m_window.isOpen())
	{
		sf::Event event;
		if (m_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || g_exit == true)
				m_window.close();
		}
		else
		{
			m_stateManager.Update(&m_window);

			m_window.clear(sf::Color(45, 45, 45));

			m_stateManager.Render(&m_window);

			m_window.display();
		}
	}
}

void System::Release()
{
}
