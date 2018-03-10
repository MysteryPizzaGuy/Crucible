#include <iostream>
#include "Osoba.h"
int main() {
	Osoba o("John", "Doe");
	std::cout << "\n" << o.to_string();
	o.DrawGraphic();
	std::cout << std::endl;
	Osoba o2("Jane", "Doe","12545123");
	std::cout << "\n" << o2.to_string();
	o2.DrawGraphic();
	std::cout << std::endl;
	Osoba o3("John", "Smith");
	std::cout << "\n" << o3.to_string();
	std::cout << std::endl;
	std::cout << "Adding OIB over setter \n" << std::endl;
	o3.set_oib("62545147");
	std::cout << o3.to_string();
	o3.DrawGraphic();
	std::cout << std::endl;
	return 0;
}