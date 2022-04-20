#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Menu.h"





int main()
{



    sf::RenderWindow window(sf::VideoMode(800, 600), "Achtung", sf::Style::Titlebar | sf::Style::Close);
    sf::Event event;
    
    bool isGameActive = false;

    
    window.setFramerateLimit(60);

    Menu menu(static_cast<float>(window.getSize().x), static_cast<float>(window.getSize().y));
    


    while (window.isOpen())
    {
        window.clear(sf::Color::Black);

        menu.menuDraw(window, static_cast<float>(window.getSize().x), static_cast<float>(window.getSize().y));
        


        


        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();

            if(!isGameActive && event.type == sf::Event::KeyPressed) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) || sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                    menu.playerMenu->createNewPlayer(sf::Color::Red);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::N) || sf::Keyboard::isKeyPressed(sf::Keyboard::M)) {
                    menu.playerMenu->createNewPlayer(sf::Color::Green);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                    menu.playerMenu->createNewPlayer(sf::Color::Blue);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) || sf::Keyboard::isKeyPressed(sf::Keyboard::V)) {
                    menu.playerMenu->createNewPlayer(sf::Color::Yellow);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) || sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
                    menu.playerMenu->createNewPlayer(sf::Color::Cyan);
                }
            }

        }

        window.display();
    }
    return 0;
}