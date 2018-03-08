#include <iostream>
using namespace std;
void printbynum(int num) {
	int numzam = 0;
	for (int i = 1; i < num; i++)
	{
		if (num / i != 0)
		{
			numzam++;
		}
		i *= 10;
	}
	if (numzam == 0)
	{
		return;
	}
	int mover = (pow(10, numzam - 1));
	int output = num / mover;
	cout << output << endl;
	

	printbynum(num%mover);

}

int main() {
	int num;
	cout << "Upisite broj: ";
	cin >> num;
	printbynum(num);


	return 0;
}