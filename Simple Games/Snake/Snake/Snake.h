#pragma once
#include <vector>
#include "Scene.h"
class Snake
{
public:
	Snake(unsigned snakeSize);
	void setSpawnPoint(unsigned x, unsigned y);
	void updateSnake(unsigned direction);
	void updateSnake();
private:
	unsigned currentx = 0;
	unsigned currenty = 0;
	unsigned direction = 0; //0 ->STOP, 1 ->UP, 2 -> Right, 3 -> Down, 4-> LEFT
	std::vector<char> snake;
};

