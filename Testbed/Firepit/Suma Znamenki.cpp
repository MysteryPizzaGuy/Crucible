#include <iostream>;
using namespace std;

int main() {

	int val, val2, modular, sum = 0;

	cout << "Upisite troznamenkasti broj: ";
	cin >> val;

	val2 = val;

	modular = val2 % 100; //Zadnje Dvije znamenke
	sum = val2 / 100; //Prva znamenka
	sum = sum + modular % 10;
	sum = sum + modular / 10;
	

	cout << "Suma te dvije znamenke je: " << sum << endl;


	return 0;
}