#include "Cvijet.h"
#include <cmath>
#include "Editor.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;

}


void Cvijet::draw()
{
	Editor ed;

	CreatePetal();
	petal.setRotation(0);
	petal.setPosition(200, 200);
	window->draw(petal);
	ed.WritePosToFile(petal);
	sf::ConvexShape copy = petal;
	window->draw(petal);
	ed.WritePosToFile(copy);
}

void Cvijet::CreatePetal()
{
	petal.setPointCount(10);
	petal.setPoint(0, sf::Vector2f(0, 0));
	double delta = 0;
	petal.setPoint(1, sf::Vector2f(20, sin(0.261799)*20+delta));
	delta = sin(0.261799) * 20 + delta;
	petal.setPoint(2, sf::Vector2f(40, sin(0.174533) * 20 + delta));
	delta =sin(0.174533) * 20 + delta;
	petal.setPoint(3, sf::Vector2f(70, delta));
	petal.setPoint(4, sf::Vector2f(90, sin(-0.174533) * 20 + delta));
	delta = 0;
	petal.setPoint(5, sf::Vector2f(110, delta));
	petal.setPoint(6, sf::Vector2f(90, sin(-0.261799) * 20 + delta));
	delta = sin(-0.261799) * 20 + delta;
	petal.setPoint(7, sf::Vector2f(70, sin(-0.174533) * 20 + delta));
	delta = sin(-0.174533) * 20 + delta;
	petal.setPoint(8, sf::Vector2f(40, delta));
	petal.setPoint(9, sf::Vector2f(20, sin(0.174533) * 20 + delta));
	petal.setOrigin((petal.getPoint(0) + petal.getPoint(5))*0.5f);

}


