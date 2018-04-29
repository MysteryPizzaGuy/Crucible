#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include <list>
#include <algorithm>
#include <vector>
#include <stack>
int main() {
	std::ifstream Input("brojevi.txt");
	if (!Input)
	{
		std::cout << "File Not Opened properly." << std::endl;
	}
	std::list<int> li;
	li.push_back(-5);

	for (size_t j = 0; j < 25; j++)
	{
		int num;
		Input >> num;
		li.push_back(num);
	}
	li.push_back(-1);
	std::cout << std::endl;
	for (auto i = li.begin(); i != li.end();i++)
	{
		std::cout << *i << ' ';
	}
	for (auto i = li.begin(); i != li.end();)
	{
		if (*i<0)
		{
			auto iter = li.erase(i);
			i = iter;
			continue;
		}
		i++;
	}
	std::for_each(li.begin(), li.end(), [](int& i) {i *= 3; });

	for (auto i = li.begin(); i != li.end();i++)
	{
		std::cout << *i << ' ';
	}
	std::cout << std::endl;
	std::vector<int> v(li.rbegin(), li.rend());
	for (auto i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << ' ';
	}

	std::stack<int> sta;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		sta.push(*i);
	}
	while (!sta.empty())
	{
		std::cout << sta.top() << ' ';
		sta.pop();
	}
	std::cout << std::endl;
	return 0;
}