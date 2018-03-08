#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <int> splitnum(int num) {
	vector <int> splitstack;
	vector <int> realstack;
	int temp;
	do
	{
		temp = num % 10;
		splitstack.push_back(temp);
		num /= 10;
	} while (num !=0);
	for (int i = splitstack.size() - 1; i >= 0; i--)
	{
		realstack.push_back(splitstack[i]);
	}
	return realstack;
}

bool isitpalindrom(int num) {
	bool isit;
	int normnum = num;
	int revnum = 0;
	do
	{
		revnum *= 10;
		revnum += normnum % 10;
		normnum /= 10;
	} while (normnum !=0);
	if (num == revnum)
	{
		return true;
	}
	else
		return false;

}

vector <int> Bubblesort(vector <int> tobesorted) {
	int temp = 0;
	for (int i = 0; i < tobesorted.size(); i++)
	{
		for (int j = 0; j < tobesorted.size()-1-i; j++)
		{
			if (tobesorted[j] > tobesorted[j+1])
			{
				temp = tobesorted[j + 1];
				tobesorted[j + 1] = tobesorted[j];
				tobesorted[j] = temp;
			}
		}
	}
	return tobesorted;


}

int main() {
	vector <int> palindroms;
	int temp;
	for (int i = 100 ; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			temp = i*j;
			if (isitpalindrom(temp))
			{
				palindroms.push_back(temp);
			}
		}
	}
	palindroms = Bubblesort(palindroms);

	for (int i = 0; i < palindroms.size(); i++)
	{
		cout << palindroms[i] << endl;
	}
	return 0;
}