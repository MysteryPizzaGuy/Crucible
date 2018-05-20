#include "DirectAddress.h"



int DirectAddress::hf(int key)
{
	return key%100003;
}

DirectAddress::DirectAddress(unsigned int const size)
{
	data = std::make_unique<std::list<Node>[]>(size);
}

unsigned long long DirectAddress::find(int key)
{
	for (auto i = data[hf(key)].begin(); i != data[hf(key)].end(); i++)
	{
		if (i->key==key)
		{
			return i->val;
		}
	}
	return 0;
}

void DirectAddress::insert(int key, unsigned long long val)
{
	data[hf(key)].push_back(Node{ key,val });
}


DirectAddress::~DirectAddress()
{
}

void DirectAddress::printToFile(std::ofstream & Output)
{
	for (size_t i = 0; i < 100003; i++)
	{
		Output << "Bucket " << i;
		for (auto j = data[i].begin(); j != data[i].end(); j++)
		{
			Output << "\t Key: " << j->key << "\t\t Value: " << j->val << "\n";
		}
		Output << "-----------------------------------------------------------\n";
	}

}
