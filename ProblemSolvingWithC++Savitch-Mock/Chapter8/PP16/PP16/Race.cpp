#include "Race.h"
#include "Line.h"
#include <iostream>
#include <fstream>
#include <vector>

Race::Race(double raceLen, int runNum)
{
	raceLength = raceLen;
	raceMidPointLength = raceLength / 2;
	RunnerNumber = runNum;
}


std::vector<Line> Race::GetRaceInfo(std::string filename) {
	std::ifstream input;
	input.open(filename);

	if (input.fail()) {
		std::cout << "Failed to open file\n";
		exit(1);
	}

	std::vector<Line> raceInfo;
	Line line = Line();
	int hour, min, sec;

	input >> hour >> min >> sec;
	this->startTime = hour * 60 + min + sec / 60;

	while (!input.eof()) {
		input >> line.loc >> line.rId;
		input >> hour >> min >> sec;
		line.timeMin = hour * 60 + min + sec / 60;
		//std::cout << line.loc<<" "<<line.rId<<" "<<line.timeMin << std::endl;
		raceInfo.push_back(line);
	}

	return raceInfo;
}

