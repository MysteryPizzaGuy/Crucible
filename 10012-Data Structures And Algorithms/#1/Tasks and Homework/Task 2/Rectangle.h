#pragma once
#include <fstream>
class Rectangle
{
public:
	void write_to_file(std::ofstream& Output);
	void Set_Rectangle(int height, int width);
	double Calc_Area();
	Rectangle();
private:
	int width;
	int height;

};

