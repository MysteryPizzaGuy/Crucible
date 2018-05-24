#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>
#include <sstream>
void parse(std::string Filename, std::unordered_map<std::string,int>& um) {
	std::ifstream Input(Filename);
	if (!Input)
	{
		std::cout << "Error Parsing";
	}
	std::string line;
	while (getline(Input,line))
	{
		std::stringstream ss(line);
		std::string temp;
		std::string key;
		int count;
		getline(ss, key, ',');
		getline(ss, temp, ',');
		getline(ss, temp);
		count = stoi(temp);
		um[key] += count;
	}
	Input.close();
}

int main() {
	std::unordered_map<std::string, int> um;
	parse("yob1901.txt", um);
	parse("yob2001.txt", um);
	std::ofstream Output("Output.txt");
	if (!Output)
	{
		std::cout << "Error Loading";
	}
	for (auto i : um) {
		Output << i.first << ", " << i.second << std::endl;
	}
	Output.close();
	return 0;
}