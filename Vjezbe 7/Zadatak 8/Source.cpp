#include <iostream>
using namespace std;
void printprime(int n, int k) {
	bool isit = true;
	for (int i = 2; i < k; i++)
	{
		if (k % i == 0)
		{
			isit = false;
		}
	}
	
	if (isit ==true)
	{
		cout << k << endl;
	}
	if (n == k+1) {
		return;
	}
	printprime(n, k + 1);
}

int main() {
	int n;
	cout << "Do kojeg broja: ";
	cin >> n;
	printprime(n, 2);



	return 0;
}