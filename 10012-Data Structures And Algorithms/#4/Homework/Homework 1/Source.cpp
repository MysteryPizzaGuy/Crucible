#include <iostream>
#include "MyVector.h"

int main() {
	double j = 0;
	MyVector v1(5, 2.2);
	v1.insert(static_cast<unsigned>(2), 5.5);
	for (size_t i = 0; i < v1.getSize(); i++)
	{
		std::cout << v1.at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << "Size: " << v1.getSize() << " Capacity: " << v1.getCapacity() << "\n";

	std::cout<<std::endl;
	return 0;
}
