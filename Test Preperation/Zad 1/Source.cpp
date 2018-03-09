#include <iostream>
#include <string>
using namespace std;

int main() {
	char x;
	cout << "Type in the character you want checked: ";
	cin >> x;
	if (isupper(x) == true)
	{
		cout << "The character is uppercase";
	}
	else if (islower(x) == true)
	{
		cout << "The character is lowercase";
	}
	else {
		cout << "Not a correct character bucko";
	}
	cout << endl;

	return 0;
}