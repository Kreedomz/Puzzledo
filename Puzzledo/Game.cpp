#include "Game.h"

Game::Game(const sf::String gameTitle, const unsigned int maxFPS, const bool enableVSync)
{
    // Set-up the game window
	_window = sf::RenderWindow(sf::VideoMode::getDesktopMode(), gameTitle, sf::State::Windowed);
	_window.setFramerateLimit(maxFPS);
	_window.setVerticalSyncEnabled(enableVSync);

    // Starts the game's loop (handles events, manages deltaTime, etc.)
    GameLoop();

}

Game::~Game()
{
    // Clean up existing entities memory
    for (Entity* entity : _mapEntities)
    {
        delete entity;
    }
    _mapEntities.clear();

}

void Game::RenderAllEntities(sf::RenderWindow& renderWindow)
{
    // Render all map entities (props, etc.)
    for (Entity* mapEntity : _mapEntities)
    {
        mapEntity->RenderEntity(renderWindow);
    }

    // Render the player last to make sure it stays above other props
    player.RenderEntity(renderWindow);
}

void Game::GameLoop()
{
    while (_window.isOpen())
    {
        // Update the deltaTime every frame while the window is open
        _deltaTime = _gameClock.getElapsedTime().asSeconds();
        _gameClock.restart();

        // Handle events while window is open
        while (const std::optional event = _window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                _window.close();
            }

            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                {
                    _window.close();
                }
                else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
                {
                    player.HandleMovement(sf::Vector2f(1.0f, 0.0f), _deltaTime);
                }
            }
        }
        // Clear previous render drawings
        _window.clear();

        // Render all entities
        RenderAllEntities(_window);

        // Display current drawings
        _window.display();
    }
}

const float Game::GetDeltaTime() const {
    return _deltaTime;
}