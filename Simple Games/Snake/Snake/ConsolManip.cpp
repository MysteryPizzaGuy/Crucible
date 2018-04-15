#include "ConsolManip.h"


ConsolManip* ConsolManip::instance = nullptr;
const HANDLE ConsolManip::handleOut = GetStdHandle(STD_OUTPUT_HANDLE);

void ConsolManip::clear_screen()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(handleOut, &csbi);
	COORD tleft = { 0,0 };

	std::cout.flush();
	DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

	DWORD howmanywritten;
	FillConsoleOutputCharacter(handleOut, TEXT(' '), length, tleft, &howmanywritten);
	FillConsoleOutputAttribute(handleOut, csbi.wAttributes, length, tleft, &howmanywritten);
	SetConsoleCursorPosition(handleOut, tleft);
}

void ConsolManip::setCursorPosition(int x, int y)
{
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(handleOut, coord);
}

ConsolManip * ConsolManip::getInstance()
{
	if (instance==nullptr)
	{
		instance = new ConsolManip();
	}
	return instance;
}

void ConsolManip::SetWindowSize(SHORT length)
{
	COORD temp = { length, length };
	SetConsoleScreenBufferSize(handleOut, temp);
	_CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(handleOut, &csbi);
	temp = csbi.dwMaximumWindowSize;
	SMALL_RECT tempRect = { 0,0,temp.X,temp.Y };
	SetConsoleWindowInfo(handleOut, true, &tempRect);
}
