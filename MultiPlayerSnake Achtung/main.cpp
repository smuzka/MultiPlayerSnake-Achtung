#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Menu.h"





int main()
{



    sf::RenderWindow window(sf::VideoMode(800, 600), "Achtung", sf::Style::Titlebar | sf::Style::Close);
    sf::Event event;
    
    
    window.setFramerateLimit(60);

    Menu menu(window.getSize().x, window.getSize().y);



    while (window.isOpen())
    {
        window.clear(sf::Color::Black);

        menu.menuDraw(window, window.getSize().x, window.getSize().y);
        





        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.display();
    }
    return 0;
}