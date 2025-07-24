#include <iostream>

#include "Game.h"
#include "Player.h"

int main()
{

    Game game("Puzzledo", 240, false);

   /* sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Puzzledo", sf::State::Windowed);
    window.setFramerateLimit(240);
    window.setVerticalSyncEnabled(false);*/



    //sf::Clock clock; // Used to store stuff like deltaTime
	
    //while(window.isOpen())
    //{
    //    clock.restart();

    //    while (const std::optional event = window.pollEvent())
    //    {
    //        if (event->is<sf::Event::Closed>())
    //        {
    //            window.close();
    //        }

    //        else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
    //        {
    //            if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
    //            {
    //                window.close();
    //            }
    //            else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
    //            {
    //                player.HandleMovement(sf::Vector2f(1.0f, 1.0f), clock);
    //            }
    //        }
    //    }
    //    // Clear previous drawings
    //    window.clear();

    //    window.draw(player.renderShape);
    //    // Set current drawings

    //    // Display current drawings
    //    window.display();
    //}

	return 0;
}