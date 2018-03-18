#pragma once
#include <SFML/Graphics.hpp>

class EvilBlocks
{
public:
	EvilBlocks(int const howmany);
	void GenerateEnemies(int const howmany);
	void SetRangeofSize(const int RangeofSize);
	void SetLimits(const int LimitLeftSide, const int LimitTopSide, const int LimitRightSide, const int LimitBottomSide);
	sf::RectangleShape GetEnemy(int const whichone) const;
private:
	std::vector <sf::RectangleShape> enemies;
	int RangeofSize = 30;
	int LimitLeftSide= 80;
	int LimitRightSide = 400;
	int LimitBottomSide = 20;
	int LimitTopSide = 160;
private:
	void InitRect(sf::RectangleShape& rect, const sf::Vector2f & pos, const sf::Color & color);
};

