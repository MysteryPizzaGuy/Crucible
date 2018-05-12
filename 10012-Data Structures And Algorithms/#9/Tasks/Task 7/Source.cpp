#include <iostream>
#include <algorithm>
#include <queue>
#include <fstream>
#include <sstream>
#include <string>
struct Osoba {
	char sex;
	int weight;
	int height;
	bool operator()(Osoba& o1, Osoba& o2) {
		return (o1.weight / (pow(o1.height, 2) *1.0)) < (o2.weight / (pow(o2.height, 2) * 1.0));
	}
};

void parse(std::vector<Osoba>& v) {
	std::ifstream Input("itm.csv");
	if (!Input)
	{
		std::cout << "Error Reading File";
	}
	std::string line;
	getline(Input, line);
	while (getline(Input,line))
	{
		std::stringstream ss(line);
		Osoba topush;
		std::string temp;
		getline(ss, temp, ',');
		getline(ss, temp, ',');
		topush.sex = temp[0];
		getline(ss, temp, ',');
		topush.weight = std::stoi(temp);
		getline(ss, temp, ',');
		topush.height = std::stoi(temp);
		getline(ss, temp);
		v.push_back(topush);
	}
}


int main() {
	std::vector<Osoba> v;
	parse(v);
	std::priority_queue<Osoba,std::vector<Osoba>,Osoba> pq(v.begin(), v.end());
	/*while (!pq.empty())
	{*/
		std::cout <<"Sex: "<< pq.top().sex <<"Height: "<< pq.top().height <<"Weight: "<< pq.top().weight << std::endl;
		pq.pop();
	/*}*/


	return 0;
}