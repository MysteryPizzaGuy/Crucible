#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "ConsolManip.h"
#include "Scene.h"
int main() {
	ConsolManip::getInstance();
	ConsolManip::SetWindowSize(100, 50);
	const unsigned maxX = 49;
	const unsigned maxY = 100;
	Scene::getInstance(maxX, maxY);
	Scene::createArena();
	for (unsigned x = 0; x < maxX; x++)
	{
		for (unsigned  y = 0; y < maxY; y++)
		{
			std::cout << Scene::newScene[x][y];
		}
	}

		

	return 0;
}