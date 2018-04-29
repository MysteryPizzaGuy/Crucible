#include <iostream>
#include "http.h"
int main() {
	http test("https://www.bla.com/", 443);
	std::cout << test.get() << std::endl;
	std::cout << test.post() << std::endl;

	return 0;
}