#include "Snake.h"

Snake::Snake(unsigned snakeSize, unsigned x, unsigned y)
{
	snakechars.push_back('^');
	for (size_t i = 0; i < snakeSize-1; i++)
	{
		snakechars.push_back('|');
	}
	for (size_t i = 0; i < snakechars.size(); i++)
	{
		snakex.push_back(x);
		snakey.push_back(y + i);
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
				snakey[i]--;
				snakechars[i] ='^';
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
				snakex[i]++;
				snakechars[i] = '>';
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
				snakechars[i] = 'V';
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
				tempx = snakex[0];
				tempy = snakey[0];
				snakex[0]--;
				snakechars[0] = '<';
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
	Scene::newScene[tempx][tempy] = ' ';
}

bool Snake::isSnakeColiding()
{
	if (snakex[0] == 0||snakex[0]==Scene::maxX)
	{
		return true;
	}
	if (snakey[0]==0||snakey[0]==Scene::maxY)
	{
		return true;
	}
	for (size_t i = 0; i < snakex.size(); i++)
	{
		for (size_t j = 0; j < snakex.size(); j++)
		{
			if (i==j)
			{
				continue;
			}
			if (snakex[i]==snakex[j]&&snakey[i]==snakey[j])
			{
				return true;
			}
		}
	}
	return false;
}

void Snake::generateFruit()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> disx(1, Scene::maxX - 1);
	std::uniform_int_distribution<> disy(1, Scene::maxY - 1);
	fruitx = disx(gen);
	fruity = disy(gen);
	ConsolManip::setCursorPosition(fruitx,fruity);
	std::cout << '@';
	std::cout.flush();
}

bool Snake::isFruitEaten()
{
	if (snakex[0]==fruitx&&snakey[0]==fruity)
	{
		ConsolManip::setCursorPosition(fruitx, fruity);
		std::cout << " ";
		return true;
	}
	return false;
}

void Snake::growSnake(unsigned byhowmuch)
{
	for (size_t i = 0; i < byhowmuch; i++)
	{
		unsigned s = snakechars.size() - 1;
		snakechars.push_back(snakechars[s - 1]);

		if (snakechars[s - 1] == '|')
		{
			if (snakey[s - 1] - snakey[s - 2]>0)
			{
				snakey.push_back(snakey[s - 1] + 1);
				snakex.push_back(snakex[s - 1]);
			}
			else {
				snakey.push_back(snakey[s - 1] - 1);
				snakex.push_back(snakex[s - 1]);
			}
		}
		else {
			if (snakex[s - 1] - snakex[s - 2]>0)
			{
				snakex.push_back(snakex[s - 1] + 1);
				snakey.push_back(snakey[s - 1]);
			}
			else {
				snakex.push_back(snakex[s - 1] - 1);
				snakey.push_back(snakey[s - 1]);
			}
		}
	}

}
