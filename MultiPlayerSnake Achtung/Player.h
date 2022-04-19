#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include "TextDisplay.h"



class PlayerTypes {
protected:
	
	sf::Color color;
	std::string name;



public:

	PlayerTypes(std::string newName, sf::Color newColor): name(newName), color(newColor){}

	std::string getName() { return name; }
	sf::Color getColor() { return color; }
	
};

class PlayerRed :protected PlayerTypes{
	PlayerRed() : PlayerTypes("RED", sf::Color::Red){}
};

class PlayerGreen :protected PlayerTypes {
	PlayerGreen() : PlayerTypes("GREEN", sf::Color::Green) {}
};

class PlayerBlue :protected PlayerTypes {
	PlayerBlue() : PlayerTypes("BLUE", sf::Color::Blue) {}
};


class Player {

private:

	static int playersNumber;
	PlayerTypes* playertype;
	
	bool isPlayerActive;


	sf::Font font;
	std::string name;
	TextDisplay nameDisplay;

	int points;
	//TextDisplay pointsDisplay;
	sf::Text *pointsDisplay;

public:

	Player() {
		playersNumber++;
		points = 0;
		isPlayerActive = 1;
		name = "random";
		//nameDisplay = new TextDisplay();
		font.loadFromFile("BUTTERSHINE SERIF.otf");
		pointsDisplay = new sf::Text();
		pointsDisplay->setColor(sf::Color::Red);
		pointsDisplay->setFont(font);





	}


	void setPoints(int currentPoints) {
		points = currentPoints;
	}
	void setPoints(int currentPoints) { points = currentPoints; }
	void changePlayerState();
	void drawPlayer(sf::RenderWindow& window, int width, int height);


};






