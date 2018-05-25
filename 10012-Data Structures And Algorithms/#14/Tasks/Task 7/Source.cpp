#include <iostream>
#include <unordered_set>
#include <fstream>
#include <string>
#include <sstream>
void parse_nonexistant(std::string Filename, std::unordered_set<std::string>& us) {
	std::ifstream Input(Filename);
	if (!Input)
	{
		std::cout << "Error Parsing";
	}
	std::string line;
	while (getline(Input, line))
	{
		std::stringstream ss(line);
		std::string temp;
		std::string key;
		int count;
		getline(ss, key, ',');
		if (us.find(key)==us.end())
		{
			std::cout << key << std::endl;
		}

	}
	Input.close();
}
void parse(std::string Filename, std::unordered_set<std::string>& us) {
	std::ifstream Input(Filename);
	if (!Input)
	{
		std::cout << "Error Parsing";
	}
	std::string line;
	while (getline(Input, line))
	{
		std::stringstream ss(line);
		std::string temp;
		std::string key;
		int count;
		getline(ss, key, ',');
		us.insert(key);

	}
	Input.close();
}

int main() {
	std::unordered_set<std::string> us;
	parse("yob2001.txt", us);
	parse_nonexistant("yob1901.txt", us);
	std::ofstream Output("Output.txt");
	if (!Output)
	{
		std::cout << "Error Loading";
	}
	Output.close();
	return 0;
}