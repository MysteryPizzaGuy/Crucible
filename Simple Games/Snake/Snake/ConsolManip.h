#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
class ConsolManip
{
public:
	static void clear_screen();
	static void setCursorPosition(int x, int y);
	static ConsolManip* getInstance();
	static void SetWindowSize(SHORT width, SHORT height);
private:
	static const HANDLE handleOut;
	static ConsolManip* instance;
	static CONSOLE_SCREEN_BUFFER_INFO csbi;
	ConsolManip() {};
};

