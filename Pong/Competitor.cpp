#include "stdafx.h"
#include "Competitor.h"


Competitor::Competitor(sf::Vector2f pos, float rotation, sf::Vector2f scale) : SpriteImage(pos, rotation, scale)
{

}


Competitor::~Competitor()
{
}

void Competitor::Update(double deltatime)
{

}

void Competitor::Render(sf::RenderWindow & window)
{
	SpriteImage::Render(window);
}

