#include <iostream>
#include "IP_Addresses.h"
int main() {
	const std::string InputFile = "ip_adrese.txt";
	std::ifstream Input;
	Input.open(InputFile);
	if (!Input)
	{
		std::cout << "Error 404";
	}
	IP_Addresses test(Input);
	Input.close();
	test.writeAllFromClass(std::cout, 'C');
	test.drawHistogram(std::cout);


	std::cout << std::endl;
	return 0;
}