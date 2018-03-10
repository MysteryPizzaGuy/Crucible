#include <iostream>
using namespace std;

int fib(long int num, long int num2, long int currnum) {
	int sum = 0;
	if (currnum > 4000000) {
		return 0;
	}
	if (currnum % 2 == 0)
	{
		sum = currnum + fib(num2, currnum, currnum + num2);
	}
	else {
		sum = fib(num2, currnum, currnum + num2);
	}
	
	return sum;
}

int main() {
	//long int t1 = 0, t2 = 1, nextTerm = 0,sum =0;
	//nextTerm = t1 + t2;

	//while (nextTerm <= 4000000)
	//{
	//	if (nextTerm %2 == 0)
	//	{
	//		sum += nextTerm;

	//	}
	//	t1 = t2;
	//	t2 = nextTerm;
	//	nextTerm = t1 + t2;
	//}

	//cout << sum << endl;

	cout << fib(0, 1, 1)<< endl;
	return 0;
}