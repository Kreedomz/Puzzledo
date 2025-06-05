#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Puzzledo", sf::State::Windowed);
    window.setFramerateLimit(240);
    window.setVerticalSyncEnabled(false);

    Player player;

    sf::Clock clock;
    float deltaTime = clock.restart().asMilliseconds();
	
    while(window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                {
                    window.close();
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                {
                    player.HandleMovement(sf::Vector2f(1.0f, 0.0f), deltaTime);
                }
            }
        }
        // Clear previous drawings
        window.clear();

        window.draw(player.renderShape);
        // Set current drawings

        // Display current drawings
        window.display();
    }

	return 0;
}