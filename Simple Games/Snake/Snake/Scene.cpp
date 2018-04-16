#include "Scene.h"
Scene* Scene::instance = nullptr;
char** Scene::oldScene =nullptr;
char** Scene::newScene =nullptr;
SHORT Scene::maxX = 49;
SHORT Scene::maxY = 100;
Scene * Scene::getInstance(SHORT tmaxX, SHORT tmaxY)
{
	maxX = tmaxX;
	maxY = tmaxY;
	if (instance ==nullptr)
	{
		instance = new Scene(maxX, maxY);
	}
	return instance;
}
void Scene::createArena()
{
	for (unsigned x = 0; x < maxX; x++)
	{
		for (unsigned y = 0; y < maxY; y++)
		{
			newScene[0][y] = '*';
			newScene[maxX-1][y] = '*';
		}
		for (unsigned x = 0; x < maxX; x++)
		{
			newScene[x][0] = '*';
			newScene[x][maxY - 1] = '*';
		}
	}

}
void Scene::Update()
{
	for (unsigned x = 0; x < maxX; x++)
	{
		for (unsigned y = 0; y < maxY; y++)
		{
			if (newScene[x][y] == oldScene[x][y]) {
				continue;
			}
			ConsolManip::setCursorPosition(x, y);
			std::cout << newScene[x][y];
		}
	}
	std::cout.flush();
	for (size_t i = 0; i < maxX; i++)
	{
		std::memcpy(oldScene[i], newScene[i], sizeof(char)*maxY);
	}
}
Scene::Scene(SHORT const maxX, SHORT const maxY) {
	oldScene = new char*[maxX];
	newScene = new char*[maxX];
	for (unsigned i = 0; i < maxX; i++)
	{
		oldScene[i] = new char[maxY];
		newScene[i] = new char[maxY];
	}
	for (unsigned i = 0; i < maxX; i++)
	{
		std::memset(oldScene[i], 0, maxY);
		std::memset(newScene[i], 0, maxY);

	}
}

Scene::~Scene()
{
	for (unsigned i = 0; i < maxX; i++)
	{
		delete[] oldScene[i];
	}
	delete[] oldScene;
	for (unsigned i = 0; i < maxX; i++)
	{
		delete[] newScene[i];
	}
	delete[] newScene;
	delete instance;
}
