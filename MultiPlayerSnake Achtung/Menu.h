#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include "PlayerMenu.h"




class Menu {

private:
	
	sf::RectangleShape* MenuLine;
	sf::RectangleShape* nameRectangle;




public:

	

	Menu(int width, int height) {
		MenuLine = new sf::RectangleShape(sf::Vector2f(0, height));
		MenuLine->setPosition(sf::Vector2f(width - 201, 100));
		MenuLine->setOutlineThickness(1);
		MenuLine->setOutlineColor(sf::Color::Red);
		MenuLine->setFillColor(sf::Color(0, 0, 0, 0));

		nameRectangle = new sf::RectangleShape(sf::Vector2f(200.0f, 100.0f));
		nameRectangle->setPosition(sf::Vector2f(width - 200.0, 0));
		nameRectangle->setOutlineThickness(2);
		nameRectangle->setOutlineColor(sf::Color::Red);
		nameRectangle->setFillColor(sf::Color(0, 0, 0, 0));

		



		

	}

	~Menu() {
		delete MenuLine;
		delete nameRectangle;
	}



	void menuDraw(sf::RenderWindow& window, int width, int height);
	





};