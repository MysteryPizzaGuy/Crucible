#pragma once
#include <string>
class ComplexNumber
{
public:
	void set_real(int real);
	void set_imaginary(int imaginary);
	std::string get();
	int get_real();
	int get_imaginary();
	ComplexNumber();
	ComplexNumber(int real, int imaginary);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
private:
	int real;
	int imaginary;
};

