#pragma once
#include <vector>
#include "Scene.h"
#include <random>
class Snake
{
public:
	Snake(unsigned snakeSize, unsigned x, unsigned y);
	void setDirection(unsigned direction);
	void updateSnake();
	bool isSnakeColiding();
	void generateFruit();
	bool isFruitEaten();
	void growSnake(unsigned byhowmuch);
private:
	unsigned direction = 0; //0 ->STOP, 1 ->UP, 2 -> Right, 3 -> Down, 4-> LEFT
	std::vector<char> snakechars;
	std::vector<unsigned> snakex;
	std::vector<unsigned> snakey;
	unsigned fruitx;
	unsigned fruity;
};

