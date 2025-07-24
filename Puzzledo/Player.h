#pragma once
#include "Entity.h"

class Player : public Entity
{
private:
	MovementState movementState = MovementState::Idle;

public:
	Player(const float shapeRadius = 25.0f, const size_t pointCount = 16, const sf::Color renderColor = sf::Color::Red) :
		Entity(shapeRadius, pointCount, renderColor) {
		_movementSpeed = 5000.0f;
	};
	virtual void HandleMovement(const sf::Vector2f& dir, const float deltaTime) override;


};