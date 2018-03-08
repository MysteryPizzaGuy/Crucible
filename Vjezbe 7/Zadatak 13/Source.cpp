#include <iostream>
#include <string>
using namespace std;


int index_of(string s, char c, int i){
	

	for (i; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			return i;
		}
		
	}
	return -1;
}
 
int main() {
	cout << index_of("ponedjeljak", 'e', 7);
	cout << endl;

	return 0;
}