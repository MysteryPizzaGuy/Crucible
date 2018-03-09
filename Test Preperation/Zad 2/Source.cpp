#include <iostream>
#include <string>
using namespace std;
bool isitup(char x) {
	if (x>='A' && x<= 'Z')
	{
		return true;
	}
	else {
		return false;
	}
}
bool isitdown(char x) {
	if (x >= 'a' && x <= 'z')
	{
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string sent;
	char target;
	cout << "What sentence do you want checked: ";
	getline(cin, sent);
	cout << "What character do you want to check for: ";
	cin >> target;
	int counT = 0;
	int count = 0;
	char temp;

	for (int i = 0; i < sent.size(); i++)
	{
		if (isitup(sent[i]) == true){	
			temp = target;
			temp = toupper(temp);
			if (sent[i] == temp)
			{
				counT++;
			}
		}
		else if (isitdown(sent[i]) == true) {
			temp = target;
			temp = tolower(temp);
			if (sent[i] == temp)
			{
				count++;
			}
		}
	}
	if (counT > count)
	{
		cout << "There's more uppercase letters";
	}
	else if (count > counT) {
		cout << "There's more lowercase letters";
	}
	else if (count == counT && count == 0) {
		cout << "There's no: " << target << " in that sentence";
	}
	else if (count == counT) {
		cout << "There's an equal amount of uppercase and lowercase " << target << "'s in this sentence and that amount is: " << count;
	}
	cout << endl;
	return 0;
}