#include <iostream>
#include <string>
#include <sstream>
#include "Stopwatch.h"
#include <ctime>
#include <list>
#include <forward_list>
#include <array>
std::string genRandString(unsigned const n, unsigned const max, unsigned const min) {
	std::stringstream ss;
	for (size_t i = 0; i < n; i++)
	{
		ss << static_cast<char>(rand() % (max - min + 1) + min);
	}
	return ss.str();
}


int main() {
	srand(time(nullptr));
	unsigned const HOWMANY = 100000;
	std::array<std::string,HOWMANY>* arr = new std::array<std::string, HOWMANY>;
	for (auto i : *arr) {
		i = genRandString(30, 97, 122);
	}
	std::list<std::string>* li = new std::list<std::string>;
	std::forward_list<std::string>* fli = new std::forward_list<std::string>;
	Stopwatch list_end(true);
	for (auto i : *arr) {
		li->push_back(i);
	}
	list_end.stop();
	li->clear();
	Stopwatch list_start(true);
	for (auto i : *arr) {
		li->push_front(i);
	}
	list_start.stop();
	Stopwatch forward_list(true);
	for (auto i : *arr) {
		fli->push_front(i);
	}
	forward_list.stop();
	std::cout << "Adding to list with push_back: "
		<< "\n>>>>>Microseconds: " << list_end.getMicroDuration().count() << " us"
		<< "\n>>>>>Milliseconds: " << list_end.getMilliDuration().count() << " ms"
		<< "\n>>>>>Seconds: " << list_end.getSecDuration().count() << " s";
	std::cout << std::endl;
	std::cout << "Adding to list with push_front: "
		<< "\n>>>>>Microseconds: " << list_start.getMicroDuration().count() << " us"
		<< "\n>>>>>Milliseconds: " << list_start.getMilliDuration().count() << " ms"
		<< "\n>>>>>Seconds: " << list_start.getSecDuration().count() << " s";
	std::cout << std::endl;
	std::cout << "Adding to forward_list with push_front: "
		<< "\n>>>>>Microseconds: " << forward_list.getMicroDuration().count() << " us"
		<< "\n>>>>>Milliseconds: " << forward_list.getMilliDuration().count() << " ms"
		<< "\n>>>>>Seconds: " << forward_list.getSecDuration().count() << " s";
	std::cout << std::endl;

	std::cout << std::endl;

	delete arr;
	delete li;
	delete fli;

	return 0;
}