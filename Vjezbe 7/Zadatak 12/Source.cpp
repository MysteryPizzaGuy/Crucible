#include <iostream>
#include <windows.h>

using namespace std;
int move(int d, int v) {
	int absd = abs(d);
	if (d != 0)
	{
		absd -= v;
	}
	return absd;
}

int update(int d, int v) {
	if (v == 190)
	{
		cout << "Udaljenost Nissana GT-R: " << d << endl;
		Sleep(2000);
		return move(d, v);
	}
	else {
		cout << "Udaljenost Lexusa LFA: " << d << endl;
		Sleep(2000);
		return move(d, v);
	}
}


int main() {
	int car1[] = { 1000, 190 };
	int car2[] = {500, 105 };
	bool trueifcar1 =true;
	do
	{
		if (trueifcar1 == true)
		{
			car1[0]=update(car1[0], car1[1]);
			trueifcar1 = false;
		}
		else if(trueifcar1 == false)
		{
			car2[0] = update(car2[0], car2[1]);
			trueifcar1 = true;
		}
	} while (car1[0] >= 0 && car2[0] >= 0);
	cout << "Oba automobila su prosla raskrizje";
	cout << endl;
	system("PAUSE");
	return 0;
}