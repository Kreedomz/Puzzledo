#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Entity
{
protected:
	sf::CircleShape renderShape;

public:
	Entity();
	~Entity();
};