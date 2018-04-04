#include <iostream>
#include "MyList.h"

int main() {
	MyList v;

	v.push_back(12);
	auto a= v.begin();
	std::cout << (*a).getVal() << std::endl;
	


	return 0;
}