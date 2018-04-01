#pragma once
#include <vector>
#include <fstream>
#include <string>
class Contact
{
public:
	Contact(std::string InputFileName);
	std::string GetName(unsigned int pos);
	std::string GetSurname(unsigned int pos);
	unsigned GetSize();
private:
	std::vector<std::string> names;
	std::vector<std::string> surnames;
	unsigned size = 0;
};

