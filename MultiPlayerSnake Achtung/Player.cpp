
#include "Player.h"

int Player::playersNumber = 0;


void Player::drawPlayer(sf::RenderWindow& window, int width, int height) {
	

	pointsDisplay



}


void Player::changePlayerState() {
	if (isPlayerActive) {
		isPlayerActive = 0;
	}
	else {
		isPlayerActive = 1;
	}
}