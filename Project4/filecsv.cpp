#include "filecsv.h"
#include<vector>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;



string filecsv::Readunitfromfile(int x, int y,std::string filee)
{
	
	std::ifstream f;
	f.open(filee);
	std::string line, unit;

	std::vector<std::vector<std::string>> row;
	int i = 0;

	while (!f.eof())

	{

		std::vector<std::string> v;

		row.push_back(v);
		getline(f, line);

		std::stringstream s(line);
		while (getline(s, unit, ','))
		{
			row[i].push_back(unit);

		}
		if ((row[i][0]) == std::to_string(x))
		{
			break;
		}

		i++;
	}
	f.close();
	return row[i][y];
}

string filecsv::Readunitfromfile2(int x, int y, std::string filee)
{
	std::ifstream f;
	f.open(filee);
	std::string line, unit;

	std::vector<std::vector<std::string>> row;
	int i = 0;
	while (f.good())

	{
		std::vector<std::string> v;

		row.push_back(v);
		getline(f, line);
		
		std::stringstream s(line);
		while (getline(s, unit, ','))
		{
			row[i].push_back(unit);

		}

		i++;
	}
	f.close();
	return row[x][y];

}
