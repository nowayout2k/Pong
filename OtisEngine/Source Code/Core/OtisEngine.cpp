
#include "OtisEngine.h"

  
namespace OE
{
	OtisEngine::OtisEngine()
	{
		gameManager.reset(new GameManager());

		//set frame limit upper bound
		window.GetWindow().setFramerateLimit(60);
	}
	OtisEngine::~OtisEngine()
	{
		
	}
	bool OtisEngine::UpdateEngine()
	{
		//Gameloop
		if (window.GetWindow().isOpen())
		{
			sf::Event event;
			while (window.GetWindow().pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.GetWindow().close();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.GetWindow().close();
				}
			}
			input.HandleInput();
			gameManager->UpdateObjects(deltatime.restart().asMicroseconds()*.000001);
			window.GetWindow().clear();
			gameManager->RenderObjects(window.GetWindow());
			window.GetWindow().display();
			return true;
		}
		else
		{
			return false;
		}

	}
}

