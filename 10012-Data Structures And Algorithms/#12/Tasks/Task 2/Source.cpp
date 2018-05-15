#include <iostream>
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "shell_sort.h"
#include "selection_sort.h"
#include <vector>
#include <algorithm>
#include <chrono>
#include <fstream>
#include <string>
#include <iterator>

void parse(std::ifstream& Input, int* data) {
	for (size_t i = 0; i < 20000; i++)
	{
		Input >> data[i];
	}
}

void sortAndMeasure(int* data,int const size, void(*sort)(int*, int), std::string sortName) {
	int* data2 = new int[size];
	std::copy(data, data + size,stdext::checked_array_iterator<int*>(data2,size));
	auto begin = std::chrono::high_resolution_clock::now();

	sort(data2, size);

	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Completed "<<sortName<<" Sort: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();
	std::cout << std::endl;
	delete[] data2;
}

int main() {
	std::ifstream Input("puno_brojeva1.txt");
	const int size = 20000;
	int* data = new int[size];
	parse(Input, data);
	sortAndMeasure(data, size, bubble_sort, "Bubble");
	sortAndMeasure(data, size, insertion_sort, "Insertion");
	sortAndMeasure(data, size, merge_sort, "Merge");
	sortAndMeasure(data, size, shell_sort, "Shell");


	delete[] data;
	return 0;
}