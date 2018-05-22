#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <unordered_set>


int main() {
	std::unordered_map<int, std::string> hash;
	hash.insert(std::pair<int, std::string>(1,"Test1"));
	hash.insert(std::pair<int, std::string>(2, "Test2"));
	hash.insert(std::pair<int, std::string>(3, "Test3"));
	hash.insert(std::pair<int, std::string>(4, "Test4"));
	hash.insert(std::pair<int, std::string>(5, "Test5"));
	std::cout << "Insert key";
	int key;
	std::cin >> key;
	if (hash.find(key)!=hash.end())
	{
		std::cout << "Value: " << (hash.find(key)->second);
	}
	else
	{
		std::cout << "No entry!";
	}
	std::unordered_multimap<int, std::string> notEven;
	for (auto i: hash)
	{
		if (i.first%2!=0)
		{
			notEven.insert(std::pair<int, std::string>(i.first, i.second));
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;

	for (auto i : notEven) {
		std::cout << i.first << "\t" << i.second << std::endl;
	}


	std::cout << std::endl;
	return 0;
}