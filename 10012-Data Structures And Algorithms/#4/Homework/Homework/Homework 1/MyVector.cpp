#include "MyVector.h"



MyVector::MyVector()
{
	numbers = new double[0];
	size = 0;
	capacity = 0;
}

MyVector::MyVector(unsigned n, double val)
{
	numbers = new double[n];
	for (auto i = begin(); i < end(); ++i)
	{
		*i = val;
	}
	size = n;
	capacity = n;
}

MyVector::MyVector(unsigned n)
{
	numbers = new double[n];
	size = n;
	capacity = n;
}

MyVector::MyVector(std::initializer_list<double> il)
{
	numbers = new double(il.size());
	int j = 0;
	for (auto i : il) {
		numbers[j++] = i;
	}
	size = il.size();
	capacity = il.size();
}

MyVector::iterator MyVector::begin()
{
	return numbers;
}

MyVector::iterator MyVector::end()
{
	return numbers+size;
}

void MyVector::insert(iterator pos, double val)
{
	if (capacity=size)
	{
		Grow();
	}
	double * tempcopy = new double[capacity];
	int j = 0;
	for (auto i = begin(); i < end();)
	{
		if (i!=pos&&tempcopy[j]!=val)
		{
			tempcopy[j++] = val;
		}
		else {
			tempcopy[j++] = *i;
			++i;
		}
	}
	delete[] numbers;
	numbers = tempcopy;
}

void MyVector::insert(unsigned pos, double val)
{
	if (capacity = size)
	{
		Grow();
	}
	double * tempcopy = new double[capacity];
	int j = 0;
	for (auto i = begin(); i < end(); i++)
	{
		if (j==pos)
		{
			tempcopy[j++] = val;
		}
		else {
			tempcopy[j++] = *i;
		}
	}
	delete[] numbers;
	numbers = tempcopy;
}


void MyVector::push_back(double val)
{
	if (capacity==size)
	{
		Grow();
	}
	numbers[size++] = val;
}

double MyVector::at(unsigned pos)
{
	return *(numbers+pos);
}

unsigned MyVector::getSize()
{
	return size;
}

unsigned MyVector::getCapacity()
{
	return capacity;
}


MyVector::~MyVector()
{
	delete[] numbers;
}

void MyVector::Grow()
{
	int old_cap = capacity;
	capacity = static_cast<int>(capacity *1.33);
	if (capacity<=old_cap) { capacity=capacity+1; }
	double * tempcopy = new double[capacity];
	int j = 0;
	for (auto i = begin(); i < end(); ++i)
	{
		tempcopy[j++] = *i;
	}
	delete[] numbers;
	numbers = tempcopy;
}
