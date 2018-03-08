#include <iostream>
#include <windows.h>

using namespace std;

void drawgrid(int x, int y, int origx, int origy) {
	for (int i = 0; i < y+2; i++)
	{
		if (i ==0 || i==origy+1)
		{
			for (int j = 0; j < origx + 2; j++)
			{
				if (j == 0 || j == origx + 1)
				{
					cout << "|";
				}
				else {
					cout << "-";
				}
			}
		}
		else {
			for (int j = 0; j < origx + 2; j++)
			{
				if (j == 0 || j == origx + 1)
				{
					cout << "|";
				}
				else if (j == x && i == y) {
					cout << "X";
				}
				else {
					cout << ".";
				}
			}
		}
		cout << endl;
	}



}

int main() {
	int car1[3] = {};
	int car2[3] = {};
	cout << "Unesite x polozaj prvog automobila: ";
	cin >> car1[0];
	cout << "Unesite y polozaj prvog automobila: ";
	cin >> car1[1];
	cout << "Unesite brzinu prvog automobila: ";
	cin >> car1[1];
	cout << "Unesite x polozaj drugog automobila: ";
	cin >> car2[0];
	cout << "Unesite y polozaj drugog automobila: ";
	cin >> car2[1];
	cout << "Unesite brzinu drugog automobila: ";
	cin >> car2[1];
	int car1orig[] = { car1[0], car1[1] };
	int car2orig[] = { car2[0], car2[1] };

	drawgrid(car1[0], car1[1], car1orig[0], car1orig[1]);
	return 0;
}