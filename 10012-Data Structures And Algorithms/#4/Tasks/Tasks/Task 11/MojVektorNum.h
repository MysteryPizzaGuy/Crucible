#pragma once
#include <initializer_list>
class MojVektorNum
{
public:
	typedef int* iterator;
public:

	MojVektorNum();
	MojVektorNum(unsigned n, int val);
	MojVektorNum(unsigned n);
	MojVektorNum(std::initializer_list <int> il);
	iterator begin();
	iterator end();
	void insert(iterator pos, int val);
	void insert(unsigned pos, int val);
	void push_back(int val);
	int at(unsigned pos);
	unsigned getSize();
	unsigned getCapacity();
	~MojVektorNum();

private:
	typedef int* iterator;
	unsigned size = 0;
	unsigned const capacity = 100;
	int* numbers = nullptr;
private:
	void Grow();
};
