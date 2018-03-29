#include <iostream>
#include "MyVector.h"

int main() {
	MyVector v;
	std::cout << "Size: " << v.getSize() << " Capacity: " << v.getCapacity() << "\n";
	double j = 0;
	for (size_t i = 0; i < 25; i++)
	{
		v.push_back(j);
		j = j + 1.1;
		std::cout << "Values: ";
		for (size_t i = 0; i < v.getSize(); i++)
		{
			std::cout << v.at(i)<<" ";
		}
		/*for (auto i : v) {
			std::cout << i << " ";
		}*/
		std::cout << std::endl;
		std::cout << "Size: " << v.getSize() << " Capacity: " << v.getCapacity() << "\n";
	}
	

	std::cout<<std::endl;
	return 0;
}
