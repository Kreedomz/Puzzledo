#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Puzzledo", sf::State::Windowed);
    sf::CircleShape shape(50.0f, 16);
    shape.setFillColor(sf::Color::Red);

	while(window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear previous drawings
        window.clear();

        window.draw(shape);
        // Set current drawings

        // Display current drawings
        window.display();
    }

	return 0;
}