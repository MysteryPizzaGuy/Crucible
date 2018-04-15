#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "ConsolManip.h"
#include "Scene.h"
#include "Snake.h"
int main() {
	ConsolManip::getInstance();
	ConsolManip::SetWindowSize(100, 50);
	const unsigned maxX = 100;
	const unsigned maxY = 49;
	Scene::getInstance(maxX, maxY);
	Scene::createArena();
	Snake::Snake(4, maxX / 2, maxY / 2);
	Scene::Update();
		

	return 0;
}