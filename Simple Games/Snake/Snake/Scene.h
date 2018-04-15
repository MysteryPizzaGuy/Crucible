#pragma once
class Scene
{
public:
	static Scene * getInstance();
private:
	Scene() {};
	static Scene* instance;

};

