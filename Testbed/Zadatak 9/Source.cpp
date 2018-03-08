#include <iostream>
#include <ctime>
using namespace std;

int main() {
	long int suma = 0;
	int umnozak = 1;
	int asred = 0;
	int raw[20] = {};
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		raw[i] = rand() % 100;
	}
	for (int i = 0; i < 20; i++) {
		suma = suma + raw[i];
		umnozak = umnozak*raw[i];

	}
	asred = suma / 20;

	cout << "Suma je : " << suma << endl;
	cout << "Umnozak: " << umnozak << endl;
	cout << "Aritmeticka sredina: " << asred << endl;

	return 0;
}