#include <iostream>
#include <vector>
using namespace std;

vector <int> sortit(vector <int> num) {
	int temp = 0;
	for (int i = 0; i < num.size(); i++)
	{
		for (int j = 0; j < num.size()-1-i; j++)
		{
			if (num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	return num;
}


int main() {
	vector <int> num;
	int temp;
	while (true)
	{
		cout << "Input number: ";
		cin >> temp;
		if (temp <0)
		{
			break;
		}
		num.push_back(temp);
	}
	num = sortit(num);
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}
	return 0;
}