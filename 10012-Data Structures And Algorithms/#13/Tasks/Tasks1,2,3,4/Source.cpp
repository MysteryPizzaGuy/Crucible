#include <iostream>
#include <algorithm>
#include <vector>
#include "DirectAddress.h"
#include <chrono>
int main() {
	std::vector<int> v;
	for (size_t i = 0; i < 1000000; i++)
	{
		v.push_back(i);
	}
	std::random_shuffle(v.begin(), v.end());
	DirectAddress exampleTable(100003);
	for (auto i : v) {
		exampleTable.insert(i, pow(i, 2));
	}
	int tofind;
	std::cout << "What to find: ";
	std::cin >> tofind;
	auto begin = std::chrono::high_resolution_clock::now();
	unsigned long long val = exampleTable.find(tofind);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Value found: " << val;
	std::cout << "\nTime: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "us";
	std::ofstream Output("print.txt");
	if (!Output)
	{
		std::cout << "Error";
	}
	exampleTable.printToFile(Output);
	std::cout << std::endl;

	Output.close();
	return 0;
}