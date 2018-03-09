#include <iostream>
#include <string>
#include <vector>
using namespace std;
int howmanywords(string sente) {
	int counter = 0;
	for (int i = 0; i < sente.size(); i++)
	{
		if (sente[i] == ' ')
		{
			counter++;
		}
	}
	return counter + 1;
}
string pickout1(string sente, int wordnumber) {
	string buf;
	int counter = 0;
	vector <string> words;
	for (int i = 0; i < sente.length(); i++)
	{
		if (sente[i] != ' ')
		{
			buf+= sente[i];
			counter++;
			if (i== sente.length() - 1)
			{
				words.push_back(buf);
				buf.clear();
				counter = 0;
			}
		}
		else {
			words.push_back(buf);
			buf.clear();
			counter = 0;
		}

	}
	return words[wordnumber - 1];
}
int main() {

	//•Unesi reèenicu, ako reèenica ima neparno rijeèi, ispiši srednju rijeè, ako ima paran broj rijeèi ispiši prvu i zadnju reèenicu, npr:
	//o „Kuca na kraju sela“ ispisuje „Kuca sela“ o „Lijepa kuca na kraju sela“ ispisuje „na“

	cout << "Unesi recenicu: ";
	string sente;
	getline(cin, sente);
	if (howmanywords(sente)%2 ==0)
	{
		cout << pickout1(sente, 1) << " " << pickout1(sente, howmanywords(sente));
	}
	else {
		cout << pickout1(sente, (howmanywords(sente) / 2) + 1);
	}
	cout << endl;
	return 0;
}