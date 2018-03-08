#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int all[45] = {};
	int selected[7] = {};
	int winning[7] = {};
	int ncorrect = 0;
	int correct[7] = {};
	int temp;

	for (int i = 0; i < 7; i++)
	{
		cout << "Unesite " << i + 1 << ". broj: ";
		cin >> selected[i];
		int j = 0;
		while (j < i && j != 0)
		{
			if (selected[i] == selected[j])
			{
				cout << "Nemozete unesti isti broj!";
				i--;
			}
			cout << endl;
			j++;
		}
	}

	for (int i = 0; i < 7; i++) {
		winning[i] = rand() % 45 + 1;
		int j = 0;
		while (j < i && j != 0)
		{
			if (winning[i] == winning[j])
			{
				i--;
			}
			j++;
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (selected[i] == winning[j]) {
				correct[ncorrect] = selected[i];
				ncorrect++;
			}

		}
		cout << "Broj pogodaka je: " << ncorrect << endl;
		for (int i = 0; i < ncorrect; i++) {
			if (ncorrect == 0) {
				cout << "Nema tocnih brojeva!";
			}
			for (int j = 0; j < ncorrect - 1; j++)
			{
				if (correct[j] > correct[j + 1]) {
					temp = correct[j + 1];
					correct[j + 1] = correct[j];
					correct[j] = temp;
				}
			}



		}
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 7 - 1; j++)
			{
				if (selected[j] > selected[j + 1]) {
					temp = selected[j + 1];
					selected[j + 1] = selected[j];
					selected[j] = temp;
				}
			}



		}

		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 7 - 1; j++)
			{
				if (winning[j] > winning[j + 1]) {
					temp = winning[j + 1];
					winning[j + 1] = winning[j];
					winning[j] = temp;
				}
			}



		}

		cout << "Odabrani brojevi su: ";
		for (int i = 0; i < 7; i++)
		{
			cout << selected[i] << ", ";
		}
		cout << endl;
		cout << "Pobjednicki brojevi su: ";
		for (int i = 0; i < 7; i++)
		{
			cout << winning[i] << ", ";
		}
		cout << endl;
		cout << "Vasi pobjedicki brojevi su: ";
		for (int i = 0; i < 7; i++)
		{
			cout << correct[i] << ", ";
		}
		cout << endl;

		return 0;
	}
}