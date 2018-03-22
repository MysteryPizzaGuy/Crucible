#include <iostream>
#include <algorithm>
#include <array>
int main() {
	std::array<int, 10> arr = { 12,43,11,12,5,6,11,12,20,11 };
	auto iter= std::adjacent_find(arr.begin(), arr.end(), [](int i, int j) {return i % 2 && j % 2; });
	std::cout << "1.) Position: " << iter - arr.begin() << " Value: " << *iter << std::endl;
	std::cout << "2.) Position: " << iter + 1 - arr.begin() << " Value: " << iter[1] << std::endl;


	return 0;
}