#include <iostream>
#include "waterlevel.h"

int main() {
	waterlevel test;
	test.load();
	test.erase(1934);
	test.display(std::cout, true);


	return 0;
}