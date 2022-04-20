#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

#include "Player.h"



class PlayerMenu {
private:

	std::vector <Player> players;

public:

	PlayerMenu() {
		//createNewPlayer(sf::Color::Blue);
	}


    void createNewPlayer(sf::Color color);

    void deletePlayer(Player player);

	void drawPlayerMenu(sf::RenderWindow& window, float width, float height);

	bool isPlayerInVector(sf::Color color) {
		for (Player element : players) {
			if (element.getColor() == color) {
				return true;
			}
		}
		return false;
	}

	int getIndex(std::vector<Player> vector, Player player);

	int getIndexFromColor(sf::Color color);

};





