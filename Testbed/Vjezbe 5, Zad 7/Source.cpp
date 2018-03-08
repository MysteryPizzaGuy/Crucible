#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> prost;
	int broj = 0;
	bool tempprost = true;
	do
	{
		cout << "Unesite broj: ";
		cin >> broj;
		if (broj >=10)
		{
			break;
		}
		else {

			cout << "Morate unijeti broj veæi ili jednak 10." << endl;
		}
	} while (true);

	for (int i = 10; i < broj; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				tempprost = false;
				break;
			}
		}
		if (tempprost == true)
		{
			prost.push_back(i);
		}
		else
			tempprost = true;
	}

	for (int i = 0; i < prost.size(); i++)
	{
		if (i < prost.size() - 1)
			cout << prost[i] << ", ";
		else
			cout << prost[i] << ".";
	}
	cout << endl;
	return 0;
}