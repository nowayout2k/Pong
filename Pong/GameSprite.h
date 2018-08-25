#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.h"
#include "IObserver.h"

/*an active participate in a game*/
class GameSprite : public Entity
{
public:
	/*
	@param filename - name of file to use for texture (ex: image.png) [Passed to base class]*/
	GameSprite(std::string textureName, sf::Sprite* sprite);
	virtual ~GameSprite();

	// Inherited via Entity
	virtual void Render(sf::RenderWindow & window) override;

	// Inherited via Entity
	virtual void Update(double deltatime) override;

	virtual sf::Sprite* const GetSprite() const { return sprite; }

protected:
	sf::Sprite* sprite;
	std::unique_ptr<sf::Texture> texture;
};
