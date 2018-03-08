#include <iostream>
using namespace std;

void chargeback(int entry) {
	if (entry >= 5)
	{
		cout << "Vracam 5 kuna" << endl;
		entry -= 5;
	}
	else if(entry >=2){
		cout << "Vracam 2 kune" << endl;
		entry -= 2;
	}
	else if (entry >= 1) {
		cout << "Vracam 1 kunu" << endl;
		entry--;
	}
	else if (entry == 0) {
		return;
	}
	chargeback(entry);
}

int main() {
	int entry;
	cout << "Unesi novac: ";
	cin >> entry;
	chargeback(entry - 6);
	cout << endl;
	return 0;
}