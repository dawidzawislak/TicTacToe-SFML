#pragma once

#include <SFML/Graphics.hpp>

class MenuPage
{
public:
	MenuPage();
	virtual ~MenuPage();

	virtual void Initialize(sf::RenderWindow* _window) = 0;

	virtual void Update(sf::RenderWindow* _window) = 0;
	virtual void Render(sf::RenderWindow* _window) = 0;

	virtual void Destroy() = 0;
};