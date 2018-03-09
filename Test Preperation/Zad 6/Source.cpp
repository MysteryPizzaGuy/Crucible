#include <iostream>
#include <string>
using namespace std;
int main() {
	string sente;
	cout << "Insert Sentence: ";
	getline(cin, sente);
	int target;
	for (int i = 0; i < sente.size(); i++)
	{
		if (sente[i] == ' ')
		{
			target = i;
		}
	}
	sente.erase(0, target+1);
	cout << sente << endl;



	return 0;
}