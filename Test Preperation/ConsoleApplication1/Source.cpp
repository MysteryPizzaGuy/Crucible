#include <iostream>
#include <string>
using namespace std;
int main() {
	string sente;
	cout << "Insert Sentence: ";
	getline(cin, sente);
	for (int i = 0; i < sente.size(); i++)
	{
		if (sente[i] == ' ')
		{
			sente.erase(i);
			break;
		}
	}
	cout << sente << endl;



	return 0;
}