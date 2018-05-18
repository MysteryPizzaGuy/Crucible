#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

void parse(std::vector<int>& v, std::ifstream& Input) {
	int i;
	while (Input>>i)
	{
		v.push_back(i);
	}

}

int main() {
	std::vector<int> v;
	std::ifstream Input("puno_malih_brojeva1.txt");
	if (!Input)
	{
		std::cout << "Error Loading";
	}
	parse(v, Input);
	std::sort(v.begin(), v.end());
	int tofind=0;
	while (tofind!=-1)
	{
		std::cout << "What number to find:";
		std::cin >> tofind;
		std::cout << std::binary_search(v.begin(), v.end(), tofind) << std::endl;
	}
	


	Input.close();
	return 0;
}