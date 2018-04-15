#include "ConsolManip.h"


ConsolManip* ConsolManip::instance = nullptr;
const HANDLE ConsolManip::handleOut = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO ConsolManip::csbi;


void ConsolManip::clear_screen()
{
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
		instance = new ConsolManip;
	}
	return instance;
}

void ConsolManip::SetWindowSize(SHORT width, SHORT height)
{
	BOOL bSuccess;
	SMALL_RECT srWindowRect;         // Hold the New Console Size 
	COORD coordScreen;

	bSuccess = GetConsoleScreenBufferInfo(handleOut, &csbi);

	// Get the Largest Size we can size the Console Window to 
	coordScreen = GetLargestConsoleWindowSize(handleOut);

	// Define the New Console Window Size and Scroll Position 
	srWindowRect.Right = (SHORT)(min(width, coordScreen.X) - 1);
	srWindowRect.Bottom = (SHORT)(min(height, coordScreen.Y) - 1);
	srWindowRect.Left = srWindowRect.Top = (SHORT)0;

	// Define the New Console Buffer Size    
	coordScreen.X = width;
	coordScreen.Y = height;

	// If the Current Buffer is Larger than what we want, Resize the 
	// Console Window First, then the Buffer 
	if ((DWORD)csbi.dwSize.X * csbi.dwSize.Y > (DWORD)width * height)
	{
		bSuccess = SetConsoleWindowInfo(handleOut, TRUE, &srWindowRect);
		bSuccess = SetConsoleScreenBufferSize(handleOut, coordScreen);
	}

	// If the Current Buffer is Smaller than what we want, Resize the 
	// Buffer First, then the Console Window 
	if ((DWORD)csbi.dwSize.X * csbi.dwSize.Y < (DWORD)width * height)
	{
		bSuccess = SetConsoleScreenBufferSize(handleOut, coordScreen);
		bSuccess = SetConsoleWindowInfo(handleOut, TRUE, &srWindowRect);
	}

	// If the Current Buffer *is* the Size we want, Don't do anything! 
	return;
}