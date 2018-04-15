#include "Scene.h"
Scene* Scene::instance = nullptr;

Scene * Scene::getInstance()
{
	if (instance ==nullptr)
	{
		instance = new Scene;
	}
	return instance;
}
