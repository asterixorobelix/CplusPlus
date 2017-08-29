#include "Race.h"
#include <vector>
#include <fstream>
#include <iostream>

Race::Race(std::string name)
{
	_FileName = name;
	_FullFileName = _FileName + _Extension;
}

void Race::CalculateRaceInfo(Race race) {
	std::vector<std::string> RaceData = GetRaceInfo(race);
}

std::vector<std::string> GetRaceInfo(Race race) {
	std::string currentLine;
	std::vector<std::string> RaceInfo;
	std::ifstream input;
	input.open(race._FullFileName);

	if (input.fail()) {
		std::cout << "Failed to load input file\n";
		exit(1);
	}

	while (!input.eof()) {
		getline(input,currentLine);
		RaceInfo.push_back(currentLine);
	}

	std::cout << "Race info\n";
	for each (std::string var in RaceInfo)
	{
		std::cout << var << std::endl;
	}

	return RaceInfo;
}