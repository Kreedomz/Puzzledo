#include "Player.h"

void Player::HandleMovement(const sf::Vector2f& dir, const float deltaTime)
{

	//clock.restart();



	
	sf::Vector2f oldPosition = _renderShape.getPosition();
	sf::Vector2f newPosition = dir * _movementSpeed * deltaTime;

	_renderShape.setPosition(oldPosition + newPosition);

	std::cout << "Delta Time: " << deltaTime << std::endl;

	//clock.restart(); // Reset deltaTime to 0.0f
}
