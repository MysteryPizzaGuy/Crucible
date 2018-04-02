#include "IP_Addresses.h"
#include <sstream>


IP_Addresses::IP_Addresses(std::ifstream& Input)
{
	std::string temp;
	std::stringstream ss;
	while (getline(Input, temp,'.'))
	{
		std::array<int, 4> arr;
		ss << temp;
		ss >> arr[0];
		ss.clear();
		getline(Input, temp, '.');
		ss << temp;
		ss >> arr[1];
		ss.clear();
		getline(Input, temp, '.');
		ss << temp;
		ss >> arr[2];
		ss.clear();
		getline(Input, temp);
		ss << temp;
		ss >> arr[3];
		addresses.push_back(arr);
		ss.clear();
	}
	countAddresses();
}
int IP_Addresses::getAAmount() const
{
	return a;
}

int IP_Addresses::getBAmount() const
{
	return b;
}

int IP_Addresses::getCAmount() const
{
	return c;
}

int IP_Addresses::getDAmount() const
{
	return d;
}

int IP_Addresses::getEAmount() const
{
	return e;
}

void IP_Addresses::drawHistogram(std::ostream & Output) const
{
	Output << "Class A: ";
	for (size_t i = 0; i < a; i++)
	{
		Output << "#";
	}
	Output << " (" << a << ")";
	Output << std::endl;
	Output << "Class B: ";
	for (size_t i = 0; i < b; i++)
	{
		Output << "#";
	}
	Output << " (" << b << ")";
	Output << std::endl;
	Output << "Class C: ";
	for (size_t i = 0; i < c; i++)
	{
		Output << "#";
	}
	Output << " (" << c << ")";
	Output << std::endl;
	Output << "Class D: ";
	for (size_t i = 0; i < d; i++)
	{
		Output << "#";
	}
	Output << " (" << d << ")";
	Output << std::endl;
	Output << "Class E: ";
	for (size_t i = 0; i < e; i++)
	{
		Output << "#";
	}
	Output << " (" << e << ")";
	Output << std::endl;
}

void IP_Addresses::writeAllFromClass(std::ostream & Output, char const c) const
{
	switch (c)
	{
	case 'A':
	case 'a':
		for (auto i : addresses) {
			if (i[0] <= 126)
			{
				Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
			}
		}
		break;
	case 'B':
	case 'b':
		for (auto i : addresses) {
			if (i[0] <= 191&&i[0]>126)
			{
				Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
			}
		}
		break;
	case 'C':
	case 'c':
		for (auto i : addresses) {
			if (i[0] <= 223 && i[0]>191)
			{
				Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
			}
		}
		break;
	case 'D':
	case 'd':
		for (auto i : addresses) {
			if (i[0] <= 239 && i[0]>223)
			{
				Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
			}
		}
		break;
	case 'E':
	case 'e':
		for (auto i : addresses) {
			if (i[0] <= 254 && i[0]>239)
			{
				Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
			}
		}
		break;

	default:
		for (auto i : addresses) {
			Output << i[0] << "." << i[1] << "." << i[2] << "." << i[3] << std::endl;
		}
		break;
	}
}
void IP_Addresses::countAddresses()
{
	for (auto i : addresses) {
		if (i[0]<=126)
		{
			a++;
		}
		else if (i[0]<=191)
		{
			b++;
		}
		else if (i[0]<=223)
		{
			c++;
		}
		else if (i[0]<=239)
		{
			d++;
		}
		else if (i[0]<=254)
		{
			e++;
		}
	}
}