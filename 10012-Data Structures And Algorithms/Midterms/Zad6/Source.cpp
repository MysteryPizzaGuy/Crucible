#include <iostream>
#include <string>
#include <stack>
#include <fstream>
int main() {
	std::ifstream Input("Source (2).cpp");
	std::stack<char> check;
	int counter = 0;
	std::string line;
	while (getline(Input, line))
	{
		counter++;
		for (size_t i = 0; i < line.length(); i++)
		{
			if (line[i] == '(' || line[i] == '[' || line[i] == '{')
			{
				check.push(line[i]);
			}
			else if (line[i] == ')')
			{
				if (check.empty() || check.top() != '('){
					std::cout << "Error Line: "<<counter <<"Char" <<i;
					return 1;
				}
			check.pop();
			}
			else if (line[i] == ']')
			{
				if (check.empty() || check.top() != '[') {
					std::cout << "Error Line: " << counter << "Char" << i;
					return 1;
				}
				check.pop();
			}
			else if (line[i] == '}')
			{
				if (check.empty() || check.top() != '{') {
					std::cout << "Error Line: " << counter << "Char" << i;
					return 1;
				}
				check.pop();
			}
		}
	
	}
	if (!check.empty()) {
		std::cout << "Error 2";
	}

	return 0;
}