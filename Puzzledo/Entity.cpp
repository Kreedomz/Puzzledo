#include "Entity.h"

/*Entity::Entity(const int entityWidth, const int entityHeight, sf::Color entityColor)
{
	renderShape = sf::CircleShape()
}*/

Entity::Entity(const float shapeRadius, const size_t pointCount, const sf::Color renderColor)
{
	renderShape = sf::CircleShape(shapeRadius, pointCount);
	renderShape.setFillColor(renderColor);
}

Entity::~Entity()
{
}