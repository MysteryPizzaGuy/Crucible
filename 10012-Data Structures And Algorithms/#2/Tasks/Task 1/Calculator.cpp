#include "Calculator.h"
#include <exception>


Calculator::Calculator(float a, float b	)
{
	this->a = a;
	this->b = b;
}

float Calculator::Multiplication() const
{
	
	return a*b;
}

float Calculator::Division() const
{
	if (b == 0) {
		throw std::exception("Can't divide by 0");
	}
	return a/b;
}

float Calculator::SquareRoot() const
{
	if (a < 0) {
		throw std::exception("Impossible when a is less than 0");
	}
	return sqrt(a);
}


