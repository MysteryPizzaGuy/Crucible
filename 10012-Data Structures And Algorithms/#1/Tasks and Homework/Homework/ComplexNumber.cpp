#include "ComplexNumber.h"
#include <sstream>


void ComplexNumber::set_real(int real)
{
	this->real = real;
}

void ComplexNumber::set_imaginary(int imaginary)
{
	this->imaginary = imaginary;
}

std::string ComplexNumber::get()
{
	std::stringstream ss;
	if (imaginary <0)
	{
		ss <<"Z= "<< real << " - " << imaginary*(-1)<<"i";
	}else
	{
		ss <<"Z= "<< real << " + " << imaginary << "i";
	}
	return ss.str();
}

int ComplexNumber::get_real()
{
	return real;
}

int ComplexNumber::get_imaginary()
{
	return imaginary;
}

ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(int real, int imaginary)
{
	set_real(real);
	set_imaginary(imaginary);
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2)
{
	real = k1.get_real() + k2.get_real();
	imaginary = k1.get_imaginary() + k2.get_imaginary();
}
