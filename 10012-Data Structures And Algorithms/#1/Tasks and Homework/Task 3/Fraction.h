#pragma once
#include <string>
class Fraction
{
public:
	Fraction(int numerator,int denominator);
	void Multiply_by_Scalar(int scalar);
	std::string to_string();
private:
	int numerator;
	int denominator;
};

