#include <iostream>
using namespace std;


int main() {
	int num;
	int temp;
	int rev = 0;
	cout << "Write in the number to reverse: ";
	cin >> num;

	do
	{

		temp = num % 10;
		num /= 10;
		rev = rev * 10 + temp;
	} while (num != 0);

	cout << rev << endl;
	return 0;
}