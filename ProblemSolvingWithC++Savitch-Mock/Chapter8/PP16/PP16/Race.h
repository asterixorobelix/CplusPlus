#pragma once
#include <string>
#include <vector>

class Race
{
public:
	Race(std::string name);
	void GetRacerStats(int Id, Race race);
	int StartHour;
	int StartMinute;
	int StartSecond;
private:
	std::string _Extension = ".txt";
	std::string _FileName;
	std::vector<int> GetRaceInfo(std::string file, Race race, int id);
};

