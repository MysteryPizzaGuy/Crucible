#pragma once
#include <vector>
#include <array>
#include <memory>
#include <list>
#include <fstream>
class DirectAddress
{
private:
	struct Node {
		int key;
		unsigned long long val;
		Node(int key, unsigned long long val) : key(key), val(val) {};
	};
private:
	std::unique_ptr<std::list<Node>[]> data;
	int hf(int key);

public:
	DirectAddress(unsigned int const size);
	unsigned long long find(int key);
	void insert(int key, unsigned long long val);
	~DirectAddress();
	void printToFile(std::ofstream& Output);
};

