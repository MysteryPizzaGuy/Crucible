#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

void print(std::vector<int>& v) {
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ',';
	}
	std::cout << std::endl;
}

int main() {
	std::vector<int> v = { 41,23,1,56,17,271,2,167 };
	
	while (!std::is_sorted(v.begin(), v.end())) {
		std::prev_permutation(v.begin(), v.end());
		print(v);

	}

	return 0;
}