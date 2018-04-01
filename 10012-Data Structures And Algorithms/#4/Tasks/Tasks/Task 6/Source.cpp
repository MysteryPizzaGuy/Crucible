#include <iostream>
#include <locale>
#include "Contact.h"
int main() {
	bool goon = true;
	Contact c1("kontakti.txt");
	do
	{
		std::cout << "Input character you wish to filter by: ";
		char c;
		std::cin >> c;
		c = tolower(c);
		for (size_t i = 0; i < c1.GetSize(); i++)
		{
			if (c1.GetName(i)[0] == c|| c1.GetName(i)[0] == toupper(c) ||c1.GetSurname(i)[0]== c || c1.GetSurname(i)[0] == toupper(c))
			{
				std::cout << c1.GetName(i) << ", " << c1.GetSurname(i) << std::endl;
			}
		}
		std::cout << "Do you want to go on?(1/0): ";
		std::cin >> goon;

	} while (goon==true);


	return 0;
}