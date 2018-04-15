#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "ConsolManip.h"
int main() {
	ConsolManip::getInstance();
	ConsolManip::SetWindowSize(100, 50);
	const unsigned maxX = 100;
	const unsigned maxY = 50;
	char oldScene[maxX][maxY];
	std::memset(&oldScene, 0, maxX*maxY);
	char newScene[maxX][maxY];
	std::memset(&newScene, 0, maxX*maxY);
	for (unsigned y = 0; y < maxY; y++)
	{
		for (unsigned x = 0; x < maxX; x++)
		{
			if (newScene[x][y] ==oldScene[x][y])
			{
				continue;
			}
			ConsolManip::setCursorPosition(x, y);
			std::cout << newScene[x][y];
		}
	}



	return 0;
}