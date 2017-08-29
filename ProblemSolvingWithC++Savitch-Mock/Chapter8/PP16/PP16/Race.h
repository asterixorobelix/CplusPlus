#pragma once
#include <string>
#include <vector>

class Race
{
public:
	Race(std::string name);
	void Race::CalculateRaceInfo(Race race);
	std::string _FullFileName;
	int _StartTime;
private:
	std::string _FileName;
	std::string _Extension = ".txt";
	void GetRaceInfo(Race race, int id);
};

