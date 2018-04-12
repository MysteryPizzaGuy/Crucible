#include <iostream>
#include <stack>
#include <sstream>
#include <string>


int main() {
	std::string expression;
	std::stack<int> s;
	getline(std::cin, expression);
	int temp;
	int res;
	for (size_t i = 0; i < expression.size(); i++)
	{
		switch (expression[i])
		{
		case '-':
			temp = s.top();
			s.pop();
			res =s.top()- temp;
			s.pop();
			s.push(res);
			break;
		case '+':
			temp = s.top();
			s.pop();
			res = s.top() + temp;
			s.pop();
			s.push(res);
			break;
		case'/':
			temp = s.top();
			s.pop();
			res = s.top() / temp;
			s.pop();
			s.push(res);
			break;
		case'*':
			temp = s.top();
			s.pop();
			res = s.top() * temp;
			s.pop();
			s.push(res);
			break;
		case ' ':
			break;
		default:
			s.push(expression[i] - '0');
			break;
		}
		
	}

	if (!s.empty())
	{
		std::cout<<s.top();
	}


	std::cout << std::endl;
	return 0;
}