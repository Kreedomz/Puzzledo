#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Entity
{
protected:
	int movementSpeed;

	virtual void HandleMovement(sf::Vector2f dir, float deltaTime) = 0;
public:
	sf::CircleShape renderShape;


	//Entity(const int entityWidth, const int entityHeight, sf::Color entityColor);
	Entity(const float shapeRadius = 25.0f, const size_t pointCount = 16, const sf::Color renderColor = sf::Color::Red);
	~Entity();
};