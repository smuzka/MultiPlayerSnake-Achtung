
#include "Menu.h"


void Menu::menuDraw(sf::RenderWindow& window, float width, float height) {
	MenuLine->setSize(sf::Vector2f(0.0, height));
	MenuLine->setPosition(sf::Vector2f(width - 201, 100));

	nameRectangle->setPosition(sf::Vector2f(width - 200, 0));


	window.draw(*nameRectangle);
	window.draw(*MenuLine);

	playerMenu->drawPlayerMenu(window, width - 100, 100);


}



