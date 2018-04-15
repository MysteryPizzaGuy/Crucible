#include "Snake.h"

Snake::Snake(unsigned snakeSize, unsigned x, unsigned y)
{
	snakechars.push_back('▲');
	for (size_t i = 0; i < snakeSize-1; i++)
	{
		snakechars.push_back('|');
	}
	for (size_t i = 0; i < snakechars.size(); i++)
	{
		snakex.push_back(x);
		snakey.push_back(y - i);
	}
	for (unsigned i = 0; i < snakechars.size(); i++)
	{
		Scene::newScene[snakex[i]][snakey[i]] = snakechars[i];
	}
}


void Snake::setDirection(unsigned direction)
{
	if (this->direction == direction || direction==0)
	{
		return;
	}
	this->direction = direction;
}

void Snake::updateSnake()
{
	unsigned tempx = 0;
	unsigned tempy = 0;
	unsigned tempx2 = 0;
	unsigned tempy2 = 0;
	char tempchar = 0;
	char tempchar2 = 0;
	switch (direction)
	{
	case 0:
		return;
		break;
	case 1:
		for (unsigned i = 0; i < snakechars.size(); i++)
		{
			if (i==0)
			{
				tempx = snakex[i];
				tempy = snakey[i];
				snakey[i]++;
				snakechars[i] ='▲';
				continue;
			}
			tempx2=snakex[i];
			tempy2 = snakey[i];
			snakex[i] = tempx;
			snakey[i] = tempy;
			if (i==1)
			{
				tempchar = snakechars[i];
				snakechars[i] = '|';
			}
			else {
				tempchar2 = snakechars[i];
				snakechars[i] = tempchar;
				tempchar = tempchar2;
			}
			tempx = tempx2;
			tempy = tempy2;
		}
		break;
	case 2:
		for (unsigned i = 0; i < snakechars.size(); i++)
		{
			if (i == 0)
			{
				tempx = snakex[i];
				tempy = snakey[i];
				snakey[i]++;
				snakechars[i] = '►';
				continue;
			}
			tempx2 = snakex[i];
			tempy2 = snakey[i];
			snakex[i] = tempx;
			snakey[i] = tempy;
			if (i == 1)
			{
				tempchar = snakechars[i];
				snakechars[i] = '-';
			}
			else {
				tempchar2 = snakechars[i];
				snakechars[i] = tempchar;
				tempchar = tempchar2;
			}
			tempx = tempx2;
			tempy = tempy2;
		}
		break;
	case 3:
		for (unsigned i = 0; i < snakechars.size(); i++)
		{
			if (i == 0)
			{
				tempx = snakex[i];
				tempy = snakey[i];
				snakey[i]++;
				snakechars[i] = '▼';
				continue;
			}
			tempx2 = snakex[i];
			tempy2 = snakey[i];
			snakex[i] = tempx;
			snakey[i] = tempy;
			if (i == 1)
			{
				tempchar = snakechars[i];
				snakechars[i] = '|';
			}
			else {
				tempchar2 = snakechars[i];
				snakechars[i] = tempchar;
				tempchar = tempchar2;
			}
			tempx = tempx2;
			tempy = tempy2;
		}
		break;
	case 4:
		for (unsigned i = 0; i < snakechars.size(); i++)
		{
			if (i == 0)
			{
				tempx = snakex[i];
				tempy = snakey[i];
				snakey[i]++;
				snakechars[i] = '◄';
				continue;
			}
			tempx2 = snakex[i];
			tempy2 = snakey[i];
			snakex[i] = tempx;
			snakey[i] = tempy;
			if (i == 1)
			{
				tempchar = snakechars[i];
				snakechars[i] = '-';
			}
			else {
				tempchar2 = snakechars[i];
				snakechars[i] = tempchar;
				tempchar = tempchar2;
			}
			tempx = tempx2;
			tempy = tempy2;
		}
		break;
	default:
		return;
		break;
	}

	for (size_t i = 0; i < snakechars.size(); i++)
	{
		Scene::newScene[snakex[i]][snakey[i]] = snakechars[i];
	}
	Scene::newScene[tempx][tempy] = 0;
}
