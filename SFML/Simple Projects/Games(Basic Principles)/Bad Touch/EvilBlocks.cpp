#include "EvilBlocks.h"
#include <stdlib.h>


EvilBlocks::EvilBlocks(const int howmany)
{
	GenerateEnemies(howmany);
}

void EvilBlocks::GenerateEnemies(int const howmany)
{
	for (size_t i = 0; i < howmany; i++)
	{
		sf::RectangleShape enemy;
		int v1 = rand() % RangeofSize + 10;
		int v2 = rand() % RangeofSize + 10;
		enemy.setSize(sf::Vector2f(v1,v2));
		sf::Vector2f pos (rand() % (LimitRightSide - LimitLeftSide) + LimitLeftSide, rand() % (LimitTopSide - LimitBottomSide) + LimitBottomSide);
		InitRect(enemy, pos, sf::Color::Red);
		enemies.push_back(enemy);
	}
}

void EvilBlocks::SetRangeofSize(const int RangeofSize)
{
	this->RangeofSize = RangeofSize;
}

void EvilBlocks::SetLimits(const int LimitLeftSide, const int LimitTopSide, const int LimitRightSide, const int LimitBottomSide)
{
	this->LimitLeftSide = LimitLeftSide;
	this->LimitTopSide = LimitTopSide;
	this->LimitRightSide = LimitRightSide;
	this->LimitBottomSide = LimitBottomSide;
}

sf::RectangleShape EvilBlocks::GetEnemy(int const whichone) const
{
	return enemies[whichone];
}


void EvilBlocks::InitRect(sf::RectangleShape & rect, const sf::Vector2f & pos, const sf::Color & color)
{
		rect.setFillColor(color);
		rect.setPosition(pos);
		rect.setOrigin(rect.getSize()*0.5f); //Sets the origin at the center of the rect.
}



