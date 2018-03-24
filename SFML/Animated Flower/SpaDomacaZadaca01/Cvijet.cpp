#include "Cvijet.h"
#include <cmath>
#include "Editor.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;

}


void Cvijet::draw(std::vector<sf::ConvexShape>& alltheshapes)
{
	for (auto i : alltheshapes) {
		window->draw(i);
	}
}

void Cvijet::Init(std::vector<sf::ConvexShape>& alltheshapes)
{
	const int HOWMANYPETALS = 10;
	
	for (size_t i = 0; i < HOWMANYPETALS; i++)
	{
		sf::ConvexShape petal;
		CreatePetal(petal);
		alltheshapes.push_back(petal);
	}
	const int HOWMANYCORES = 1;
	for (size_t i = 0; i < HOWMANYCORES; i++)
	{
		sf::ConvexShape core;
		CreateCore(core);
		core.setFillColor(sf::Color::Yellow);
		alltheshapes.push_back(core);
	}
}



void Cvijet::CreatePetal(sf::ConvexShape& petal)
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

void Cvijet::CreateCore(sf::ConvexShape & core)
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
			core.setPoint(i, sf::Vector2f(100 + (cos(angle)*RAD), 100 + (sin(angle)*RAD)));
		}
		core.setOrigin((core.getPoint(0) + core.getPoint(NUMBEROFSIDES/2))*0.5f);

}


