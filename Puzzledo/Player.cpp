#include "Player.h"

void Player::HandleMovement(sf::Vector2f dir, float deltaTime)
{
	sf::Vector2f newPosition = renderShape.getPosition() * dir;
	renderShape.setPosition(renderShape.getPosition() + );
}
