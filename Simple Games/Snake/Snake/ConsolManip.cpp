#include "ConsolManip.h"

void ConsolManip::clear_screen()
{
	static const HANDLE handleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
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
	static const HANDLE handleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(handleOut, coord);
}
