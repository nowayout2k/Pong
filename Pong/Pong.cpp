//  Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "GameManager.h"
#include "Debug.h"
#include "Window.h"



//create window

int main()
{
	Window window;
	//tracks time between frames
	sf::Clock deltatime;

	//create game driver
	GameManager gameManager;

	Input input;

	//Gameloop
	while (window.GetWindow().isOpen())
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
		gameManager.UpdateObjects(deltatime.restart().asMicroseconds()*.000001);
		window.GetWindow().clear();
		gameManager.RenderObjects(window.GetWindow());
		window.GetWindow().display();
	}

	return 0;
}
