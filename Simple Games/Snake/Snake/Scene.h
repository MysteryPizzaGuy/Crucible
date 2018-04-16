#pragma once
#include "ConsolManip.h"
class Scene
{
public:
	static Scene * getInstance(SHORT maxX, SHORT maxY);
	static void createArena();
	static void Update();
	static SHORT maxX;
	static SHORT maxY;

public:
	static char** oldScene;
	static char** newScene;

private:
	Scene(SHORT const maxX, SHORT const maxY);
	~Scene();
	static Scene* instance;
	


};

