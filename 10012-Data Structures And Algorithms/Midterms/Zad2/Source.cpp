#include <iostream>
#include <random>
#include <chrono>
void genRandInt(int min, int max, int* array, int* arrayafterlast) {
	std::random_device dev;
	std::mt19937 gen(dev());
	std::uniform_int_distribution<int> rand(min, max);
	for (int* i = array; i < arrayafterlast; i++)
	{
		*i = rand(gen);
	} 
}
int main() {
	int randnum[10000];
	int total = 0;
	auto start = std::chrono::high_resolution_clock::now();
	genRandInt(1, 5, randnum,randnum+10000);
	for (size_t i = 0; i < 10000; i++)
	{
		total += randnum[i];
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << total / 10000.0 << std::endl
		<< std::chrono::duration_cast<std::chrono::microseconds> (end - start).count() << std::endl;
	return 0;
}