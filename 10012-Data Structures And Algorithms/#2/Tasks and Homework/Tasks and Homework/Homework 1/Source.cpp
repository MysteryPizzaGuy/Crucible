#include <iostream>
#include <algorithm>
#include <array>
int main(){
std::array<int, 5> foo = { 1,7,3,13,5 };

if (std::all_of(foo.begin(), foo.end(), [](int i) {return i % 2; }))
	std::cout << "All the numbers are odd";
else
	std::cout << "Not all of the numbers are odd";std::cout << std::endl;	return 0;}