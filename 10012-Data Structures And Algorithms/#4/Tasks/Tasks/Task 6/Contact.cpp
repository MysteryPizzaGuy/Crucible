#include "Contact.h"

Contact::Contact(std::string InputFileName)
{
	std::ifstream Input;
	Input.open(InputFileName);
	std::string temp;
	while (getline(Input,temp,';'))
	{
		names.push_back(temp);
		getline(Input, temp);
		surnames.push_back(temp);
		size++;
	}
	


	Input.close();
}

std::string Contact::GetName(unsigned int pos)
{

	return names[pos];
}

std::string Contact::GetSurname(unsigned int pos)
{
	return surnames[pos];
}

unsigned Contact::GetSize()
{
	return size;
}

