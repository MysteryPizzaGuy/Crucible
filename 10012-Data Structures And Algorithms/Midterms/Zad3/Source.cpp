#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
struct LakeInfo
{
	int year;
	double waterlevel;
};

void LoadToVector(std::ifstream& Input, std::vector<LakeInfo>& LakeHuron) {
	std::string line;
	std::string temp;
	int year;
	double waterlevel;
	getline(Input, line);
	while (getline(Input, line))
	{
		std::stringstream ss(line);
		getline(ss, temp, ',');
		getline(ss, temp, ',');
		year = std::stoi(temp);
		getline(ss, temp, ',');
		std::stringstream temp2;
		temp2 << temp;
		temp2 >> waterlevel;
		LakeInfo info;
		info.year = year;
		info.waterlevel = waterlevel;
		LakeHuron.push_back(info);
	}
}


int main() {
	std::ifstream Input("LakeHuron.csv");
	if (!Input)
	{
		std::cout << "File Not Opened properly." << std::endl;
	}
	std::vector<LakeInfo> LakeHuron;
	LoadToVector(Input, LakeHuron);
	double waterlevel = 0;
	int whichone = 0;
	for (size_t i = 0; i < LakeHuron.size(); i++)
	{
		if (LakeHuron[i].waterlevel>waterlevel)
		{
			whichone = i;
			waterlevel = LakeHuron[i].waterlevel;
		}
	}
	std::cout << "Year: " << LakeHuron[whichone].year << " Waterlevel: " << LakeHuron[whichone].waterlevel << std::endl;

	Input.close();
	return 0;
}