#include <iostream>
#include <random>
#include <ostream>
#include <algorithm>
#include <queue>
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

	std::priority_queue<int> pq(v.begin(), v.end());
	int n = 0;
	while (n!=-1)
	{
		std::cout << "Insert num: ";
		std::cin >> n;
		pq.push(n);
	}
	while (!pq.empty())
	{
		std::cout << pq.top() << std::endl;
		pq.pop();
	}


	return 0;
}