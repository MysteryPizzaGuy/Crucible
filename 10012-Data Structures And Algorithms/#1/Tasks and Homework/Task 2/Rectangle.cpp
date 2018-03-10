#include "Rectangle.h"


void Rectangle::write_to_file(std::ofstream& Output)
{
	Output << "P(" << width << ", " << height << ") = " << Calc_Area() << std::endl;
}

void Rectangle::Set_Rectangle(int height, int width)
{
	this->height = height;
	this->width = width;
}

Rectangle::Rectangle()
{
}

double Rectangle::Calc_Area()
{

	return height*width;
}


