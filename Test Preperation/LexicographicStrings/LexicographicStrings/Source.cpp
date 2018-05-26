#include <iostream>
#include <random>
#include <vector>
#include <string>
#include <algorithm>
template<typename T>
void print(T begin, T end) {
	for (T i = begin; i != end; i++)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "---------------------------------"<<std::endl;
}
int main() {
	std::vector<std::string> v = { "Ana","Matos","Sime","Annabella","Eve","Michael","Viko","Dad","Xav" };
	std::sort(v.begin(), v.end(), [](std::string s1, std::string s2) {return std::lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end(), [](char c1, char c2) {return c1 > c2; });});
	print(v.begin(), v.end());
	std::stable_sort(v.begin(), v.end(), [](std::string s1, std::string s2) {return s1.size() > s2.size(); });
	print(v.begin(), v.end());


	return 0;
}