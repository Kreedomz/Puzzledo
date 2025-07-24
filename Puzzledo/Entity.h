#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


enum class MovementState : uint8_t
{
	Idle = 0,
	Moving
};

enum class EntityType : uint8_t
{
	STATIC_OBJECT,
	MOVEABLE_OBJECT,
	ENEMY,
	PLAYER
};

class Entity
{
private:

protected:
	float _movementSpeed = 5.0f;
	EntityType _entityType = EntityType::STATIC_OBJECT;

	sf::CircleShape _renderShape;

	virtual void HandleMovement(const sf::Vector2f& dir, const float deltaTime) = 0;

public:
	Entity(const float shapeRadius = 25.0f, const size_t pointCount = 16, const sf::Color renderColor = sf::Color::Red);
	~Entity();
public:
	void RenderEntity(sf::RenderWindow& renderWindow);
};