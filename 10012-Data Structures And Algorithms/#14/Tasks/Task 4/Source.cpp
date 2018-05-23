#include <iostream>
#include <unordered_set>
#include <random>
#include <vector>
#include <string>

void genString(std::vector<std::string>& v, int howMany) {
	std::random_device dev;
	std::mt19937 gen{ dev() };
	std::uniform_int_distribution<int> dis{97, 101};
	for (size_t i = 0; i < howMany; i++)
	{
		std::string temp;
		for (size_t i = 0; i < 5; i++)
		{
			temp += dis(gen);
		}
		v.push_back(temp);

	}
}

int main() {
	std::unordered_set<std::string> us;
	std::vector<std::string> v;
	genString(v, 1000);
	for (auto i = v.begin(); i < v.end(); i++)
	{
		auto check = us.insert(*i);
		if (!check.second)
		{
			std::cout << "Failure inserting: " << *i << std::endl;
		}
	}



	return 0;
}
