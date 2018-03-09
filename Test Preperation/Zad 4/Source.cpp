#include <iostream>
#include <string>
using namespace std;
int main() {
	string sente;
	int counternj = 0;
	int counterlj = 0;
	cout << "Insert Sentence: ";
	getline(cin, sente);
	for (int i = 0; i < sente.size()-1; i++)
	{
	
		if (sente[i+1] == 'j')
		{
			switch (sente[i])
			{
			case 'l':
				counterlj++;
				break;
			case 'n':
				counternj++;
				break;
			default:
				break;
			}
		}
	}
	cout << "Number of nj's:" << counternj << endl;
	cout << "Number of lj's:" << counterlj << endl;



	return 0;
}