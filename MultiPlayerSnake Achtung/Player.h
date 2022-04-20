#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <array>


class PlayerTypes {
protected:
	
	sf::Color color;
	std::string name;
	sf::Keyboard::Key controls[2];


public:

	PlayerTypes(std::string newName, sf::Color newColor, std::array<sf::Keyboard::Key, 2> newcontrols) : name(newName), color(newColor){
		controls[0] = newcontrols[0];
		controls[1] = newcontrols[1];
	}

	virtual std::string getControls() = 0;
	std::string getName() { return name; }
	sf::Color getColor() { return color; }
	
	
};

class PlayerRed : public PlayerTypes {
public:
	PlayerRed() : PlayerTypes("RED", sf::Color::Red, { sf::Keyboard::Q, sf::Keyboard::W }) {}
	std::string getControls() { return "Q / W"; }
};

class PlayerGreen : public PlayerTypes {
public:
	PlayerGreen() : PlayerTypes("GREEN", sf::Color::Green, { sf::Keyboard::N, sf::Keyboard::M }) {}
	std::string getControls() { return "N / M"; }
};

class PlayerBlue : public PlayerTypes {
public:
	PlayerBlue() : PlayerTypes("BLUE", sf::Color::Blue, { sf::Keyboard::Down, sf::Keyboard::Right }) {}
	std::string getControls() { return "Down / Right"; }
};

class PlayerYellow : public PlayerTypes {
public:
	PlayerYellow() : PlayerTypes("YELLOW", sf::Color::Yellow, { sf::Keyboard::C, sf::Keyboard::V }) {}
	std::string getControls() { return "C / V"; }
};

class PlayerCyan : public PlayerTypes {
public:
	PlayerCyan() : PlayerTypes("CYAN", sf::Color::Cyan, { sf::Keyboard::Z, sf::Keyboard::X }) {}
	std::string getControls() { return "Z / X"; }
};

class Player {

private:

	static int playersNumber;
	sf::Font* font;


	PlayerTypes* playertype;
	std::string name;
	bool isPlayerActive;
	int points;
	sf::Text pointsDisplay;
	sf::Text nameDisplay;
	sf::Text controlsDisplay;

	void playerTypeChoose(sf::Color color);


public:
	

	Player(sf::Color color) {
		playersNumber++;
		points = 0;
		isPlayerActive = true;
		name = "random";
		playerTypeChoose(color);

		font = new sf::Font();
		font->loadFromFile("BUTTERSHINE SERIF.otf");

		pointsDisplay.setFont(*font);
		pointsDisplay.setCharacterSize(15);
		pointsDisplay.setFillColor(playertype->getColor());
		pointsDisplay.setString(std::to_string(points));

		nameDisplay.setFont(*font);
		nameDisplay.setCharacterSize(15);
		nameDisplay.setFillColor(playertype->getColor());
		nameDisplay.setString(playertype->getName());

		controlsDisplay.setFont(*font);
		controlsDisplay.setCharacterSize(15);
		controlsDisplay.setFillColor(playertype->getColor());
		controlsDisplay.setString(playertype->getControls());
	}


	void setPoints(int currentPoints) { points = currentPoints; }
	void changePlayerState();
	void drawPlayer(sf::RenderWindow &window, float width, float height);
	sf::Color getColor() { return playertype->getColor(); }

	bool operator==(const Player &other) {
		return this->name == other.name;
	}

};






