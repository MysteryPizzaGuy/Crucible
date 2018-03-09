#include <iostream>
#include <string>
using namespace std;
int main() {
	string sente;
	int counter = 0;
	cout << "Insert Sentence: ";
	getline(cin, sente);
	for (int i = 0; i < sente.size(); i++)
	{
		if (sente[i] == ' ')
		{
			counter++;
		}
	}
	cout << counter + 1 << endl;


	return 0;
}