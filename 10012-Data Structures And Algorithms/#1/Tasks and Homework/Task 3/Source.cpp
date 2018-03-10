#include <iostream>
#include "Fraction.h"

int main() {
	bool goon;
	do
	{
		int numerator;
		int denominator;
		std::cout << "Input numerator: ";
		std::cin >> numerator;
		std::cout << "Input denominator: ";
		std::cin >> denominator;
		int scalar;
		std::cout << "Input scalar: ";
		std::cin >> scalar;
		Fraction f(numerator, denominator);
		std::cout << f.to_string() << " * " << scalar << " = ";
		f.Multiply_by_Scalar(scalar);
		std::cout << f.to_string();
		std::cout << "\nWant to continue(1/0): ";
		std::cin >> goon;
	} while (goon == true);

	return 0;
}