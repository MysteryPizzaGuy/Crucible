#include <iostream>
#include <algorithm>
#include <array>



int main() {
	std::array<int, 5> arr = { 3,3,4,6,9 };
	std::array<int,5>::iterator iter = std::find_if(arr.begin(), arr.end(), [](int i) {return i % 2 == 0; });
	std::cout << "The position of the first even number is:  " << iter - arr.begin() << std::endl;

	return 0;
}