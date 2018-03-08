#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float radius;


	cin >> radius;

	float povrsina = pow(radius, 2)*3.14;
	float opseg = 2 * radius*3.14;

	cout << "Povrsina je: " << povrsina << endl << "Opseg je: " << opseg << endl;

	return 0;
}