#pragma once
#include "Entity.h"

enum MovementState
{
	Idle = 0,
	Moving
};

class Player : public Entity
{
private:
	MovementState movementState = MovementState::Idle;


public:
	Player(const float shapeRadius = 25.0f, const size_t pointCount = 16, const sf::Color renderColor = sf::Color::Red) :
		Entity(shapeRadius, pointCount, renderColor) {};
	virtual void HandleMovement(sf::Vector2f dir, float deltaTime) override;

};