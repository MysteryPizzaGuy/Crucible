#include <iostream>
#include "Calculator.h"

//1. Napi�ite program koji korisniku omogu�uje sljede�e
//matemati�ke operacije(svaku napravite u posebnoj
//	funkciji) :
//	o Mno�enje
//	o Dijeljenje � osigurati da djeljitelj ne smije biti 0
//	o Va�enje drugog korijena � osigurati da broj ne smije biti < 0
//	U�itajte od korisnika operaciju i potrebne operande pa izvr�ite
//	operaciju i ispi�ite rezultat.Kakav god korisnikov unos bio,
//	program se ne smije sru�iti!Koristite ili tradicionalni ili moderni
//	na�in upravljanja pogre�kama.
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