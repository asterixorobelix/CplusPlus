#pragma once
#include <string>
#include <vector>

class Race
{
public:
	Race(std::string name);
	void Race::CalculateRaceInfo(Race race);
	std::string _FullFileName;
private:
	std::string _FileName;
	std::string _Extension = ".txt";
	std::vector<std::string> GetRaceInfo(Race race);
};

