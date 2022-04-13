

#include "PlayerMenu.h"




void PlayerMenu::drawPlayerMenu(sf::RenderWindow& window, int width, int height) {
	for (Player element : Players) {
		element.drawPlayer(window, width, height);
	}
}


