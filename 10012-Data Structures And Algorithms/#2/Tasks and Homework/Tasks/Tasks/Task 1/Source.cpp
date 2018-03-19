#include <iostream>
#include "Calculator.h"

//1. Napišite program koji korisniku omoguæuje sljedeæe
//matematièke operacije(svaku napravite u posebnoj
//	funkciji) :
//	o Množenje
//	o Dijeljenje – osigurati da djeljitelj ne smije biti 0
//	o Vaðenje drugog korijena – osigurati da broj ne smije biti < 0
//	Uèitajte od korisnika operaciju i potrebne operande pa izvršite
//	operaciju i ispišite rezultat.Kakav god korisnikov unos bio,
//	program se ne smije srušiti!Koristite ili tradicionalni ili moderni
//	naèin upravljanja pogreškama.
//
//



int main() {
	Calculator calc(2, 0);
	try
	{
		std::cout << calc.Division() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}



	return 0;
}