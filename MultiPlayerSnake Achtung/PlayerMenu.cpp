

#include "PlayerMenu.h"




void PlayerMenu::drawPlayerMenu(sf::RenderWindow& window, float width, float height) {
	int i = 0;
	for (Player element : players) {
		element.drawPlayer(window, width - 90, i * 30 + height + 15);
		i++;
	}


}


void PlayerMenu::createNewPlayer(sf::Color color) {
    if (!isPlayerInVector(color)) {
        players.push_back(Player(color));
    }
    else {
        players.erase(players.cbegin() + getIndexFromColor(color));
        //deletePlayer(players[getIndexFromColor(color)]);
    }
}

void PlayerMenu::deletePlayer(Player player) {
	players.erase(players.cbegin() + getIndex(players, player));
}


int PlayerMenu::getIndex(std::vector<Player> vector, Player player) {
    std::vector<Player>::iterator it = find(vector.begin(), vector.end(), player);

    // If element was found
    if (it != vector.end())
    {
        // calculating the of player
        int index = it - vector.begin();
        return index;
    }
    else {
        // If the element is not present in the vector
        return -1;
    }
}

int PlayerMenu::getIndexFromColor(sf::Color color) {
    int i = 0;
    for (Player element : players) {
        if (element.getColor() == color) {
            //std::vector<Player>::iterator index = 
            return  i;
        }
        i++;
    }
}


