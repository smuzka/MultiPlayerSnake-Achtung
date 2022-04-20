
#include "Player.h"

int Player::playersNumber = 0;

void Player::playerTypeChoose(sf::Color color) {
	if (color == sf::Color::Red) {
		playertype = new PlayerRed();
	}
	else if (color == sf::Color::Green) {
		playertype = new PlayerGreen();
	}
	else if (color == sf::Color::Blue) {
		playertype = new PlayerBlue();
	}
	else if (color == sf::Color::Yellow) {
		playertype = new PlayerYellow();
	}
	else if (color == sf::Color::Cyan) {
		playertype = new PlayerCyan();
	}
}

void Player::drawPlayer(sf::RenderWindow &window, float width, float height) {
	

	pointsDisplay.setPosition(width, height);
	nameDisplay.setPosition(width + 30, height);
	controlsDisplay.setPosition(width + 115, height);


	window.draw(pointsDisplay);
	window.draw(nameDisplay);
	window.draw(controlsDisplay);


}


void Player::changePlayerState() {
	if (isPlayerActive) {
		isPlayerActive = 0;
	}
	else {
		isPlayerActive = 1;
	}
}