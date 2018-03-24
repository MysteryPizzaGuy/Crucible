#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw(std::vector<sf::ConvexShape>& alltheshapes);
	void Init(std::vector<sf::ConvexShape>& alltheshapes);
private:
	sf::RenderWindow* window;
	void CreatePetal(sf::ConvexShape& petal);
	void CreateCore(sf::ConvexShape& core);
};

