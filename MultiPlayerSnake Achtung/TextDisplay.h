#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class TextDisplay {

private:
	sf::Font font;
	sf::String text;


public:

	TextDisplay(sf::String currentText) {
		font.loadFromFile("BUTTERSHINE SERIF.ttf");
		text = new sf::String(currentText);
	}


	void setText(sf::String currentText) {
		text = currentText;
	}


	void drawText(sf::RenderWindow& window, sf::String text ,int x, int y, int size) {

		sf::Text textToDisplay(text, font);
		textToDisplay.setFillColor(sf::Color::Red);
		textToDisplay.setPosition(sf::Vector2f(x, y));


		window.draw(textToDisplay);



	}


};