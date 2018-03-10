#include "Osoba.h"
#include <sstream>
#include <iostream>

Osoba::Osoba(std::string ime, std::string prezime)
{
	this->ime = ime;
	this->prezime = prezime;
	oib = "NEMA OIB-a";
}

Osoba::Osoba(std::string ime, std::string prezime, std::string oib)
{
	this->ime = ime;
	this->prezime = prezime;
	this->oib = oib;
}

std::string Osoba::to_string()
{
	std::stringstream ss;
	ss << prezime << ", " << ime << " (" << oib << ")";
	return ss.str();
}

void Osoba::DrawGraphic()
{
	std::stringstream ss("|");
	ss << "|" << ime << " " << prezime;
	do
	{
		ss << " ";
	} while (ss.str().length()<16);
	ss << "|";
	std::cout << std::endl;
	std::cout << "      \\|||/\n";
	std::cout << "      (o o)\n";
	std::cout << ",~ooO~~(_)~~~~~~,\n";
	std::cout << "|               |\n";
	std::cout << ss.str() << std::endl;
	std::cout << "|               |\n";
	std::cout << "'~~~~~~~~~~~ooO~'\n";
	std::cout << "    |___|___|\n";
	std::cout << "     | | | |\n";
	std::cout << "     ooO Ooo\n";


}

void Osoba::set_oib(std::string oib)
{
	this->oib = oib;
}
