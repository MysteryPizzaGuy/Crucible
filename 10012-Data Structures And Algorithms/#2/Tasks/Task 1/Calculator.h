#pragma once
class Calculator
{
public:
	Calculator(float a, float b);
	float Multiplication() const;
	float Division() const;
	float SquareRoot() const;
private:
	float a;
	float b;
};

