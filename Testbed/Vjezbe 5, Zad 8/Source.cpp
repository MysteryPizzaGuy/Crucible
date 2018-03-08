#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector <string> ime;
	vector <string> prezime;
	vector <int> godina;
	int tempgod;
	string tempime;
	string tempprez;
	char con = 'd';
	int num = 0;
	char isp = 'd';
	do
	{
		cout << "Unesite ime: ";
		getline(cin, tempime);
		ime.push_back(tempime);
		cout << "Unesite prezime: ";
		getline(cin, tempprez);
		prezime.push_back(tempprez);
		cout << "Unesite godinu: ";
		cin >> tempgod;
		godina.push_back(tempgod);
		cout << "Zelite li dodati jos osoba? (d/n): ";
		cin >> con;
		cin.ignore();

	} while (con == 'd');

	do
	{
		cout << "Kojem broju zelite pristupiti: ";
		cin >> num;
		if (num > ime.size() || num <= 0)
		{
			cout << "Krivo unesen redni broj" << endl;
			continue;

		}
		cout << "Ime: " << ime[num - 1] << endl;
		cout << "Prezime: " << prezime[num - 1] << endl;
		cout << "Godina: " << godina[num - 1] << endl;
		cout << "Zelite li pristupiti jos jednom broju? (d/n): ";
		cin >> isp;
	} while (isp == 'd');

	cout << endl;
	return 0;
}