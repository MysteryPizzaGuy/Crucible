#include <iostream>
#include <vector>
using namespace std;

int main() {
	int nums[6] = {};
	int nums2[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cout << "Input number: ";
		cin>> nums[i];
	}
	cout << " Now inputing for the second array " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Input number: ";
		cin >> nums2[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << nums[i] << " " << nums2[i];
	}

	return 0;
}