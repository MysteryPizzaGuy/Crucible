#pragma once
#include <vector>
#include <array>
#include <fstream>
#include <string>
#include <ostream>
class IP_Addresses
{
public:
	IP_Addresses(std::ifstream& Input);
	int getAAmount() const;
	int getBAmount() const;
	int getCAmount() const;
	int getDAmount() const;
	int getEAmount() const;
	void drawHistogram(std::ostream& Output) const;
	void writeAllFromClass(std::ostream & Output, char const c) const;
private:
	std::vector <std::array<int,4>> addresses;
	int a;
	int b;
	int c;
	int d;
	int e;
private:
	void countAddresses();
};

