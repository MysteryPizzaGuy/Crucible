#include "MojVektorNum.h"
#include <stdexcept>


MojVektorNum::MojVektorNum()
{
	numbers = new int[capacity];
	size = 0;
}

MojVektorNum::MojVektorNum(std::initializer_list<int> il)
{
	numbers = new int[capacity];
	int j = 0;
	for (auto i : il) {
		numbers[j++] = i;
	}
	size = il.size();
}

MojVektorNum::iterator MojVektorNum::begin()
{
	return numbers;
}

MojVektorNum::iterator MojVektorNum::end()
{
	return numbers + size;
}

void MojVektorNum::insert(iterator pos, int val)
{
	if (capacity == size || pos>begin() + 99 || pos<begin())
	{
		throw std::out_of_range("Insert method(iter) out of range");
	}
	int * tempcopy = new int[capacity];
	int j = 0;
	for (auto i = begin(); i < end();)
	{
		if (i == pos && tempcopy[j - 1] != val)
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

void MojVektorNum::insert(unsigned pos, int val)
{
	if (capacity == size || pos>100 || pos<0)
	{
		throw std::out_of_range("Insert method(iter) out of range");
	}
	int * tempcopy = new int[capacity];
	int j = 0;
	for (auto i = begin(); i < end(); i++)
	{
		if (j == pos)
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


void MojVektorNum::push_back(int val)
{
	if (capacity == size)
	{
		throw std::out_of_range("push_back method out of range");
	}
	numbers[size++] = val;
}

int MojVektorNum::at(unsigned pos)
{
	return *(numbers + pos);
}

unsigned MojVektorNum::getSize()
{
	return size;
}

unsigned MojVektorNum::getCapacity()
{
	return capacity;
}


MojVektorNum::~MojVektorNum()
{
	delete[] numbers;
}