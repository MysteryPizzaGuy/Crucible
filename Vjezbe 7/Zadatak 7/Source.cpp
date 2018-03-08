#include <iostream>
using namespace std;

void printstep(int num1, int num2, int num3) {
	cout << num1 << endl;
	if ((num1+num3)>num2)
	{
		return;
	}


	printstep(num1 + num3, num2, num3);
}

int main() {
	int num1;
	int num2;
	int num3;
	cout << "Upisite prvi broj: " << endl;
	cin >> num1;
	cout << "Upisite drug broj: " << endl;
	cin >> num2;
	cout << "Upisite broj koraka: " << endl;
	cin >> num3;

	printstep(num1, num2, num3);
	return 0;
}