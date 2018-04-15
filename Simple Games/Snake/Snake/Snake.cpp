#include "Snake.h"

Snake::Snake(unsigned snakeSize)
{
	snake.push_back('>');
	for (size_t i = 0; i < snakeSize-1; i++)
	{
		snake.push_back('-');
	}
}

void Snake::setSpawnPoint(unsigned x, unsigned y)
{
	currentx = x;
	currenty= y;
}

void Snake::updateSnake(unsigned direction)
{

}

void Snake::updateSnake()
{

}
