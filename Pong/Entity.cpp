#include "stdafx.h"
#include "Entity.h"
#include "Debug.h"
#include "SFML/Graphics.hpp"

int Entity::nextID = 0;

Entity::Entity(sf::Transformable* entity)
{
	isAlive = true;
	this->id = nextID++;
	this->transform.reset(entity);
	this->transform->setPosition(sf::Vector2f(0,0));
	this->transform->setRotation(0.0f);
	this->transform->setScale(sf::Vector2f(1, 1));
}


Entity::~Entity()
{
}



void Entity::Kill()
{
	isAlive = false;
}
 

 
