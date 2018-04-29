#include <iostream>
#include <string>
#include <fstream>
#include <queue>
int main() {
	std::ifstream Input("brojevi.txt");
	if (!Input)
	{
		std::cout << "File Not Opened properly." << std::endl;
	}
	std::ofstream Output("brojevi2.txt");
	std::queue<int> q;
	for (size_t j = 0; j < 5; j++)
	{
		for (size_t i = 0; i < 5; i++)
		{
			int num;
			Input >> num;
			q.push(num);
		}
		for (size_t i = 0; i < 5; i++)
		{
			Output << q.front();
			if (j==4&&i==4)
			{
				Output << std::endl;
			}
			else {
				Output << " ";

			}
			q.pop();
		}
	}

	Input.close();
	return 0;
}