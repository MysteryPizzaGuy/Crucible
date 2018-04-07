#include "waterlevel.h"



waterlevel::waterlevel()
{
}

void waterlevel::load()
{
	std::ifstream Input("LakeHuron.csv");
	std::string temp;
	getline(Input, temp);
	while (getline(Input, temp, ',')) {
		std::stringstream ss;
		unsigned year;
		double level;
		getline(Input, temp, ',');
		ss << temp;
		ss >> year;
		ss.ignore();
		getline(Input, temp);
		ss.clear();
		ss << temp;
		ss >> level;
		levels.push_back(level);
		years.push_back(year);
	}
	Input.close();
}

void waterlevel::display(std::ostream& Output, bool reverse)
{
	if (reverse == false)
	{
		auto iter = years.begin();
		for (auto i : levels) {

			Output << "Year: " << *iter << "\t";
			iter++;
			Output << "Level: " << i << std::endl;
		}
	}
	else {
		auto iter = years.rbegin();
		for (auto i = levels.rbegin(); i != levels.rend();i++) {

			Output << "Year: " << *iter << "\t";
			iter++;
			Output << "Level: " << *i << std::endl;
		}
	}
}

void waterlevel::display(std::ostream & Output, unsigned year)
{
	auto iteryear = years.begin();
	auto iterlevel = levels.begin();
	while (*iteryear <=year)
	{
		Output << "Year: " << *iteryear << "\t";
		iteryear++;
		Output << "Level: " << *iterlevel << std::endl;
		iterlevel++;
	}
}

void waterlevel::erase(unsigned year)
{
	auto iteryear = years.begin();
	while (*iteryear <= year)
	{
		iteryear++;
		years.pop_front();
		levels.pop_front();
	}
}


waterlevel::~waterlevel()
{
}
