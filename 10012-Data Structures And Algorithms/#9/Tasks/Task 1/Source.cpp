#include <iostream>
#include <random>
#include <ostream>
#include <algorithm>
template<typename T>
void print(std::ostream& Output, T begin, T end) {
	for (T i = begin; i < end; i++)
	{
		Output << *i << std::endl;
	}
	Output << "--------------------------------" << std::endl;
}

int main() {
	std::random_device rnd;
	std::mt19937 gen{ rnd() };
	std::uniform_int_distribution<> dis(1, 100);
	std::vector<int> v;
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(dis(gen));
	}

	print(std::cout, v.begin(), v.end());

	std::make_heap(v.begin(), v.end());

	print(std::cout, v.begin(), v.end());
	int n =0;
	while (n!=-1)
	{
		std::cout << "N to insert: ";
		std::cin >> n;
		v.push_back(n);
		std::push_heap(v.begin(), v.end());
		print(std::cout, v.begin(), v.end());
	}
	while (!v.empty())
	{
		std::pop_heap(v.begin(), v.end());
		v.pop_back();
		print(std::cout, v.begin(), v.end());

	}

	return 0;
}