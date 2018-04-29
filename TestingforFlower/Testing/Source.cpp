#include <SFML/Graphics.hpp>
#include "Editor.h"
#include <iostream>
#include <cmath>
#include <ctime>
//
//int LocateCurrentMousedOver(std::vector<sf::RectangleShape>& alltheshapes, sf::Event& event, sf::RenderWindow& window) {
//	
//}
void CreateCore(sf::ConvexShape & core)
{
	const int NUMBEROFSIDES = 32;
	core.setPointCount(NUMBEROFSIDES);
	const float PI = 3.14159f;
	const int RAD = 25;

	for (size_t i = 0; i < NUMBEROFSIDES; i++)
	{
		double angle = (PI * 2) * static_cast<double>(i) / NUMBEROFSIDES;
		if (i == 0)
		{
			core.setPoint(i, sf::Vector2f(100, 100));
		}
		core.setPoint(i, sf::Vector2f(100+(cos(angle)*RAD), 100+(sin(angle)*RAD)));
	}
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Test");
	window.setFramerateLimit(60);
	/*std::vector<sf::RectangleShape> alltheshapes;
	sf::RectangleShape rect(sf::Vector2f(20, 20));
	rect.setPosition(sf::Vector2f(100, 100));
	sf::RectangleShape rect2(sf::Vector2f(20, 20));
	rect2.setPosition(sf::Vector2f(150, 150));
	alltheshapes.push_back(rect);
	alltheshapes.push_back(rect2);
	int mousedover = -1;*/

	while (window.isOpen())
	{
		//Editor ed(&window);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			/*switch (event.type) {
			case sf::Event::MouseButtonPressed:
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					mousedover = LocateCurrentMousedOver(alltheshapes, event, window);
				}
				break;
			case sf::Event::MouseMoved:
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && mousedover != -1)
				{
					alltheshapes[mousedover].setPosition(event.mouseMove.x, event.mouseMove.y);
				}
				break;
			default:
				break;
			}*/
		}
		sf::ConvexShape core;
		CreateCore(core);
		core.setPosition(200, 200);
		srand(time(nullptr));
		float deltarand = (rand() % 1000) / 1000.00f - 0.5;
		float deltarandvert = (rand() % 1000) / 1000.00f - 0.5;
		std::cout << deltarand << " , ";
		std::cout << deltarandvert;
		std::cout << std::endl;
		window.clear();
		//window.draw(alltheshapes[0]);
		//window.draw(alltheshapes[1]);
		window.draw(core);
		window.display();
	}

	return 0;
}