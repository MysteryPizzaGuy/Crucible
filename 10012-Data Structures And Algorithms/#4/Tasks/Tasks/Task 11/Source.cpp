#include "MojVektorNum.h"
#include <iostream>
int main() {
	try{
		MojVektorNum v = { 0,1,2,3,4 };
		v.insert(2, 22);
		for (MojVektorNum::iterator it = v.begin(); it != v.end(); ++it) {
			std::cout << *it << std::endl;
		}
		/*for (int i = 0; i < 100; i++) {
			v.push_back((i + 1) * 10);
		}
		for (MojVektorNum::iterator it = v.begin(); it != v.end(); ++it) {
			std::cout << *it << std::endl;
		}*/
	}
	catch (std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}