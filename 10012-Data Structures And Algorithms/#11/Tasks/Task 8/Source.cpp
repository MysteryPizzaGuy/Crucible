#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include "shell_sort.h"
#include <algorithm>
#include <array>
void parse(std::ifstream& Input, int* data) {
	int n;
	for (size_t i = 0; i < 1000000; i++)
	{
		Input >> n;
		data[i] = n;
	}


}

int main() {
	std::ifstream Input("puno_brojeva1.txt");
	std::vector<int> data(1000000);	
	parse(Input, data.data());
	std::cout << "Parsing done" << std::endl;
	auto begin = std::chrono::high_resolution_clock::now();
	shell_sort(data.data(),1000000);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "us";
	return 0;
}