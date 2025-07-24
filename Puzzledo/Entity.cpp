#include "Entity.h"

/*Entity::Entity(const int entityWidth, const int entityHeight, sf::Color entityColor)
{
	renderShape = sf::CircleShape()
}*/

Entity::Entity(const float shapeRadius, const size_t pointCount, const sf::Color renderColor)
{
	_renderShape = sf::CircleShape(shapeRadius, pointCount);
	_renderShape.setFillColor(renderColor);
}

Entity::~Entity()
{
	
}

void Entity::RenderEntity(sf::RenderWindow& renderWindow)
{
	renderWindow.draw(_renderShape);
}