#pragma once
#include <iostream>
class consoleGrid
{
public:
	consoleGrid(int xmax, int ymax);
	~consoleGrid();
	void draw();
private:
	int xmax;
	int ymax;
	char** grid;
};

