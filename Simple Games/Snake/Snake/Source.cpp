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
	Snake s(9, maxX / 2, maxY / 2);
	unsigned rez = 0;
	s.generateFruit();
	for (;;) {
		if (GetAsyncKeyState(VK_UP))
		{
			s.setDirection(1);
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			s.setDirection(2);
		}
		else if (GetAsyncKeyState(VK_DOWN)) {
			s.setDirection(3);
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			s.setDirection(4);
		}
		else if (GetAsyncKeyState(VK_SPACE))
		{
			break;
		}
		if (s.isSnakeColiding())
		{
			ConsolManip::clear_screen();
			ConsolManip::setCursorPosition(maxX / 2, maxY / 2);
			std::cout << "GAME OVER";
			ConsolManip::setCursorPosition(maxX / 2, maxY / 1.5);
			std::cout << "SCORE:" << rez;
			std::cout.flush();
			break;
		}
		if (s.isFruitEaten())
		{
			s.growSnake(1);
			rez++;
			s.generateFruit();
		}

		s.updateSnake();
		Scene::Update();
		Sleep(80);

	}
		

	return 0;
}