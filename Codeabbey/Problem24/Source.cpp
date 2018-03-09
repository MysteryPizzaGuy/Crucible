#include <iostream>
#include <vector>
#include <string>

using namespace std;

string prpr(string mystr) {
	int number = stoi(mystr);
	number = pow(number, 2);
	mystr = to_string(number);
	while (mystr.length() < 8)
	{
		mystr.insert(0, "0");
	}
	mystr.erase(0, 2);
	mystr.erase(4, 2);
	return mystr;
}
vector <string> splitstring(string tosplit) {
	vector <string> tokens;
	string buffer;
	int howmany = -1;
	for (int i = 0; i < tosplit.length(); i++)
	{
		howmany++;
		if (isspace(tosplit[i]) || i == tosplit.length()-1)
		{
			buffer = tosplit;
			buffer.erase(buffer.begin(),buffer.begin()+(i-howmany));
			if (tosplit.length()-1==i)
			{

			}else
			buffer.erase(howmany, string::npos);
			howmany = -1;
			tokens.push_back(buffer);
		}
	}


	return tokens;
}

int main() {
	string num;
	string temp[2];
	int counter = 1;
	cout << "Give me the random seed to check: ";
	getline(cin, num);
	vector<string> token = splitstring(num);
	for (int i = 0; i < token.size(); i++)
	{
		temp[1] = token[i];
		do
		{
			temp[0] = temp[1];
			counter++;
			temp[1] = prpr(temp[0]);
		} while (temp[1] != temp[0]);

		cout << "It takes this many repetitions before "<<token[i]<< " starts looping: " << counter - 1 << endl;
	}
	

	return 0;
}