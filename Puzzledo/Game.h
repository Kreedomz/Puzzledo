#pragma once

#include <iostream>
#include "Player.h"
#include "Entity.h"
#include <vector>
#include <SFML/Graphics.hpp>

constexpr bool ALLOW_DEBUG = true;

class Game
{
private:
	sf::RenderWindow _window;
	
	sf::Clock _gameClock;
	float _deltaTime = 0.0f;

	std::vector<Entity*> _mapEntities;

	Player player;

private:
	void GameLoop();


public:
	Game(const sf::String gameTitle, const unsigned int maxFPS, const bool enableVSync);
	~Game();

	const float GetDeltaTime() const;

	//void LoadPlayer();

	void RenderAllEntities(sf::RenderWindow& renderWindow);

};
