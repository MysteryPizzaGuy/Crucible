#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binarytodec(string binary) {
	int dec = 0;
	int tempcaster = 0;
	for (int i = binary.length() - 1; i >= 0; i--)
	{
		tempcaster = binary[binary.length()-1-i] - '0';
		dec += tempcaster * pow(2, i);
	}
	return dec;
}
string dectobinary(int dec) {
	string binary;
	vector <int> list;
	int i =-1;
	do
	{
		if (dec>=pow(2,i) && dec < (pow(2,i+1)))
		{
			list.push_back(i);
			i = -1;
			dec -= pow(2, i);

		}
		i++;
	} while (dec != 0);

	for (int i = list.size() - 1; i >= 0; i--)
	{
		if (i==list[i])
		{
			binary += "1";
		}
		else {
			binary += "0";
		}
	}
	return binary;
}
void inputb2d() {
	string binary;
	bool notabin;
	do
	{
		system("cls");
		cout << "Input the binary number: ";
		getline(cin, binary);
		for (int i = 0; i < binary.length(); i++)
		{
			if (binary[i] =='1' || binary[i] =='0')
			{
				notabin = false;
			}
			else {
				notabin = true;
				continue;

			}
		}
	} while (notabin == true);
	int dec = binarytodec(binary);
	cout << dec;

}
void inputd2b() {
	int dec = 0;
	cout << "Input the dec number: ";
	cin >> dec;
	cin.ignore();
	string binary = dectobinary(dec);
	cout << binary;

}

int main() {
	int whichone;
	do
	{
		system("cls");
		cout << "Input the number of the operation you wish to do:  \n 1) Binary to Decimal \n 2) Decimal to Binary \nENTER: ";
		cin >> whichone;
		cin.ignore();
	} while (whichone !=1 && whichone !=2);
	system("cls");
	if (whichone ==1)
	{
		inputb2d();
	}
	else if (whichone == 2) {
		inputd2b();
	}
	cout << endl;
	return 0;
}