#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
double artmean(vector <int> numbers) {
	int temp = 0;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		temp += numbers[i];
	}
	return temp / numbers.size();
}
int closesttomean(vector <int> numbers, double artmean) {
	double temp = artmean;
	int buf = 0;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		if (temp > fabs(artmean - numbers[i]))
		{
			temp = fabs(artmean - numbers[i]);
			buf = i;
		}

	}
	return numbers[buf];
}

int main() {
	int temp;
	//�Napi�i program koji u�itava brojeve sve dok se ne upi�e negativan broj, program treba ispisati broj koji je najbli�i aritmeti�koj sredini.
	vector <int> numbers;
	while (true)
	{
		cout << "Input number: ";
		cin >> temp;
		if (temp < 0)
		{
			break;
		}
		numbers.push_back(temp);
	}
	cout << closesttomean(numbers, artmean(numbers));
	cout << endl;
	return 0;
}