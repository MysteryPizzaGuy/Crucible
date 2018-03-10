#include "Fraction.h"
#include <sstream>


Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::Multiply_by_Scalar(int scalar)
{
	numerator *= scalar;
}

std::string Fraction::to_string()
{
	std::stringstream ss;
	ss << numerator << "/" << denominator;
	return ss.str();
}
