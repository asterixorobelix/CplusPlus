#include "Race.h"
#include <vector>
#include <fstream>
#include <iostream>

Race::Race(std::string name)
{
	_FileName = name;
}

void Race::GetRacerStats(int ID, Race race) {
	GetRaceInfo(_FileName + _Extension, race, ID);
}

std::vector<int> Race::GetRaceInfo(std::string file, Race race, int ID) {
	std::cout << "Racer id: " << ID << std::endl;
	std::vector<int> times;
	std::ifstream input;
	input.open(file);

	if (input.fail()) {
		std::cout << "Failed to open file\n";
	}

	input >> race.StartHour >> race.StartMinute >> race.StartSecond;

	int locationId, racerId, currentHour, currentMin, currentSec;

	while (!input.eof()) {
		input >> locationId >> racerId >> currentHour >> currentMin >> currentSec;

		if (racerId == ID) {
			times.push_back(currentHour);
			times.push_back(currentMin);
			times.push_back(currentSec);
		}
	}
	std::cout << "Racer times: \n";
	for (int i = 0; i<size(times); i += 3)
	{
		std::cout << times[i] << " " << times[i + 1] << " " << times[i + 2] << std::endl;
	}
	return times;
}

