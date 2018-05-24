#include <iostream>
#include <unordered_set>
#include <chrono>
#include <algorithm>
#include <set>
int main() {
	std::vector<int> v;
	for (size_t i = 1; i < 1000001; i++)
	{
		v.push_back(i);
	}
	std::random_shuffle(v.begin(), v.end());
	std::set<int> s;
	std::unordered_set<int> us;
	auto begin = std::chrono::high_resolution_clock::now();
	for (auto i : v) {
		s.insert(i);
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Inserting into Set: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << std::endl;
	begin = std::chrono::high_resolution_clock::now();
	for (auto i : v) {
		us.insert(i);
	}
	end = std::chrono::high_resolution_clock::now();
	std::cout << "Inserting into unordered set: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << std::endl;
	std::cout << "What number do you want to search for: ";
	int toFind;
	std::cin >> toFind;
	begin = std::chrono::high_resolution_clock::now();
	s.find(toFind);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "Searching the set: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << std::endl;
	begin = std::chrono::high_resolution_clock::now();
	us.find(toFind);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "Searching the unordered set: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << std::endl;
	return 0;
}