#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

#include "Player.h"



class PlayerMenu {
private:

	
	



	std::vector <Player> Players;



public:

	PlayerMenu() {

		
	}


	void createNewPlayer() {
		Players.push_back(Player());
	}


	void drawPlayerMenu(sf::RenderWindow& window, int width, int height);


};