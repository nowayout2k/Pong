#pragma once
#include "SFML/Graphics.hpp"

class IEntity
{
public:
	IEntity() {}
	virtual ~IEntity() {}

	//accessors
	virtual sf::Vector2f GetPosition() const = 0;
	virtual void SetPosition(const sf::Vector2f& pos) = 0;

	virtual float GetRotation() const = 0;
	virtual void SetRotation(const float rotation) = 0;

	virtual sf::Vector2f GetScale() const = 0;
	virtual void SetScale(const sf::Vector2f& scale) = 0;
 
};

