#include <iostream>
#include <vector>
using namespace std;
bool isiteven(int x) {
	if (x %2 ==0)
	{
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int numbers[10] = {};

	for (int i = 0; i < 10; i++)
	{
		cout << "Input number: ";
		cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (isiteven(numbers[i]) == true)
		{
			cout << numbers[i]<< ", ";
		}
		
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (isiteven(numbers[i]) == false)
		{
			cout << numbers[i] << ", ";
		}
	}
	
	return 0;
}