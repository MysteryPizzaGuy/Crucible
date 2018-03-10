#pragma once
#include <string>

/*Definirati novi tip podataka za �uvanje imena, prezimena i
OIB-a osobe uz sljede�e uvjete:
o Nije dopu�teno kreirati osobu bez imena i prezimena
o Pri kreiranju osobe upis OIB-a je opcionalan
o Na tipu postoji metoda koja vra�a tekst u formatu �prezime,
ime (oib)�
o Na tipu postoji metoda koja omogu�uje naknadno
upisivanje OIB-a
o * Na tipu postoji metoda koja iscrtava osobu:
Demonstrirajte rad novog tipa podataka iz main-a.*/
class Osoba
{
public:
	Osoba(std::string ime, std::string prezime);
	Osoba(std::string ime, std::string prezime, std::string oib);
	std::string to_string();
	void DrawGraphic();
	void set_oib(std::string oib);
private:
	std::string ime;
	std::string prezime;
	std::string oib;
};

