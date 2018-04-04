#include <iostream>
#include "MyList.h"

int main() {
	MyList v;

	for (size_t i = 0; i < 11; i++)
	{
		v.push_back(i);
	}
	v.display();
	


	return 0;
}