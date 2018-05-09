#include "consoleGrid.h"



consoleGrid::consoleGrid(int xmax, int ymax)
{
	grid = new char*[xmax];
	for (size_t i = 0; i <xmax; i++)
	{
		grid[i] = new char[ymax];
	}
	this->xmax = xmax;
	this->ymax = ymax;
}


consoleGrid::~consoleGrid()
{
	for (size_t i = 0; i <xmax; i++)
	{
		delete[] grid[i];
	}
	delete[] grid;
}

void consoleGrid::draw()
{
	for (size_t y = 0; y < ymax; y++)
	{
		for (size_t x = 0; x < xmax; x++)
		{
			std::cout << grid[x][y];
		}
		std::cout << std::endl;
	}
}
