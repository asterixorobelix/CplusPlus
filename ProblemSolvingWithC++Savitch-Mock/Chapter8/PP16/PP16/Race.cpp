#include "Race.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <string>

Race::Race(std::string name)
{
	_FileName = name;
	_FullFileName = _FileName + _Extension;
}

void Race::CalculateRaceInfo(Race race) {
	GetRaceInfo(race, 132);
}

void Race::GetRaceInfo(Race race, int id) {
	std::string currentLine;
	std::ifstream input;
	input.open(race._FullFileName);

	if (input.fail()) {
		std::cout << "Failed to load input file\n";
		exit(1);
	}
	std::string startTime;
	getline(input, startTime);

	race._StartTime = std::stoi(startTime.substr(0, 2)) * 60  + std::stoi(startTime.substr(3, 2)) + std::stoi(startTime.substr(6, 2))*60;

	std::cout << "Start time in min: " << race._StartTime << std::endl;

	int raceLoc, racerId, RaceHour, RaceMin, RaceSec;
	double raceTime, minutesMile;
	const double raceDist = 13.1;
	const int FinishLoc = 2;

	while (!input.eof()) {
		input>>raceLoc>>racerId>>RaceHour>>RaceMin>>RaceSec;
		if (raceLoc == FinishLoc&&racerId == id) {
			raceTime = RaceHour * 60  + RaceMin + RaceSec*60 - race._StartTime;
			std::cout << "Race Time in min: " << raceTime << std::endl;
			minutesMile = raceTime / raceDist;
			std::cout << "Minutes per mile: " << minutesMile << std::endl;
		}
		
	}

	input.close();
	
}
