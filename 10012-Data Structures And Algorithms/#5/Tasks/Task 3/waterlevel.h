#pragma once
#include <list>
#include <string>
#include <fstream>
#include <sstream>
#include <ostream>
class waterlevel
{
public:
	waterlevel();
	void load();
	void display(std::ostream& Output, bool reverse);
	void display(std::ostream& Output, unsigned year);
	void erase(unsigned year);
	~waterlevel();
private:
	std::list<double> levels;
	std::list<unsigned> years;

};

