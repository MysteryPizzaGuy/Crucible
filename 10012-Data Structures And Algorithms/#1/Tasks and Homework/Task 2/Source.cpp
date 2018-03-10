#include <iostream>
#include "Rectangle.h"
int main() {
	std::ofstream Output;
	Output.open("RectangleArea.txt");
	const int HOWMANY = 5;
	Rectangle r[HOWMANY];
	for (size_t i = 0; i < HOWMANY; i++)
	{
		int height;
		int width;
		std::cout << "Input height: ";
		std::cin >> height;
		std::cout << "Input width: ";
		std::cin >> width;
		r[i].Set_Rectangle(height, width);
	}
	for (size_t i = 0; i < HOWMANY; i++)
	{
		r[i].write_to_file(Output);
	}

	

	Output.close();
	return 0;
}