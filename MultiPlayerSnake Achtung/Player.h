#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>


class PlayerTypes {
protected:
	std::string name;
	sf::Color color;

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
	int points;



public:

	Player() {
		playersNumber++;
		points = 0;

	}


	void drawPlayer(sf::RenderWindow& window, int width, int height);


};






