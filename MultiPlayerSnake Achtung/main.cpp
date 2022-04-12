#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>





class supertype {
public:
    int x;

    supertype(int a) : x(a){}

};

class subtype : public supertype{
public:
    int y;

    subtype(int a, int b) : supertype(a), y(b) {}

};

class parent {
public:
    void myfunc(subtype costam) {

        std::cout << costam.x << costam.y << std::endl;
    }
};


class child : public parent {
public:
    void myfunc(supertype innecostam) {
        std::cout << "child" << std::endl;

    }


};


int main()
{



    sf::RenderWindow window(sf::VideoMode(800, 600), "GFK", sf::Style::Titlebar | sf::Style::Close);
    sf::Event event;

    while (window.isOpen())
    {
        window.clear(sf::Color::White);

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.display();
    }
    return 0;
}