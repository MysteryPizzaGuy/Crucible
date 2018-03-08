#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int unsorted[20] = {};
	int temph = 0;
	int templ = 100;
	for (int i = 0; i < 20; i++) {
		unsorted[i] = rand() % 100;
		if (temph < unsorted[i])
		{
			temph = unsorted[i];
		}

		if (templ > unsorted[i])
			templ = unsorted[i];
		cout << unsorted[i] << endl;
	}
	cout << "Najveci broj je: " << temph << endl;
	cout << "Najmanji broj je: " << templ << endl;




	return 0;
}