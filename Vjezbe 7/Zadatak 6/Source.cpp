#include <iostream>
#include <vector>
using namespace std;
int sumvector(vector <int> tobesum) {
	int sum = 0;

	for (int i = 0; i < tobesum.size(); i++)
	{
		sum += tobesum[i];
	}

	return sum;
}

bool checkeven(int candi) {

	if (candi % 2 == 0)
	{
		return true;
	}
	else
		return false;
}


int main() {
	int num1;
	int num2;
	vector <int> sump;
	vector <int> sumn;
	cout << "Unesite prvi broj: ";
	cin >> num1;
	cout << "Unesite drugi broj: ";
	cin >> num2;
	
	if (num1>num2)
	{
		for (int i = num2+1; i < num1; i++)
		{
			if (checkeven(i) == true)
			{
				sump.push_back(i);
			}
			else if (checkeven(i) ==false)
			{
				sumn.push_back(i);
			}

		}

	}
	else if (num2 > num1) {
		for (int i = num1 + 1; i < num2; i++)
		{
			if (checkeven(i) == true)
			{
				sump.push_back(i);
			}
			else if (checkeven(i) == false)
			{
				sumn.push_back(i);
			}

		}
	}

	cout << "Suma parnih brojeva je: " << sumvector(sump) << endl;
	cout << "Suma neparnih brojeva je: " << sumvector(sumn);
	cout << endl;
	return 0;
}
