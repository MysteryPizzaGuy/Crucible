#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float p1 = 92;
	float p2 = 97;
	float p3 = 95.4;
	float p4 = 90.1;
	float p5 = 96;
	float stdev;
	float average = (p1 + p2 + p3 + p4 + p5) / 5;

	stdev = sqrt((pow((p1 - average), 2) + pow((p2 - average), 2) + pow((p3 - average), 2) + pow((p4 - average), 2) + pow((p5 - average), 2)) / 5);

	cout << "Standarnda Devijacija je:" << stdev << endl << "Aritmeticka sredina je: " << average << endl;


	return 0;
}