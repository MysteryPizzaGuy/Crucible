#include <iostream>
#include <fstream>
#include "selection_sort.h"

void parse(std::ifstream& Input, Pravokutnik* data, int size) {
	for (size_t i = 0; i < size; i++)
	{
		Input >> data[i].sirina;
		Input >> data[i].visina;
	}
}



int main() {
	std::ifstream Input("pravokutnici.txt");
	if (!Input)
	{
		std::cout << "Error";
	}
	int size = 1000;
	Pravokutnik* data = new Pravokutnik[size];
	parse(Input, data, size);
	Input.close();
	std::ofstream Output("Output.txt");
	selection_sort(data, size);

	for (size_t i = 0; i < size; i++)
	{
		Output << data[i].sirina << " " << data[i].visina << std::endl;
	}

	delete[] data;

	return 0;
}