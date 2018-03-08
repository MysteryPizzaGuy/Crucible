#include <iostream>
using namespace std;

void draw(int n) {

	if (n%2!=0)
	{
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n/2; j++)
		{
			cout << '*';
		}
		for (int j = 0; j < n/2; j++)
		{
			cout << '#';
		}
		cout << endl;
	}
}


int main() {
	int n;
	cout << "Upisi: ";
	cin >> n;
	draw(n);
	cout << endl;
	return 0;
}