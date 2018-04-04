#pragma once
#include <initializer_list>
class MyVector
{
public:
	typedef double* iterator;
public:

	MyVector();
	MyVector(unsigned n, double val);
	MyVector(unsigned n);
	MyVector(std::initializer_list <double> il);
	iterator begin();
	iterator end();
	void insert(iterator pos, double val);
	void insert(unsigned pos, double val);
	void push_back(double val);
	double at(unsigned pos);
	unsigned getSize();
	unsigned getCapacity();
	~MyVector();

private:
	typedef double* iterator;
	unsigned size =0;
	unsigned capacity=0;
	double* numbers =nullptr;
private:
	void Grow();
};

