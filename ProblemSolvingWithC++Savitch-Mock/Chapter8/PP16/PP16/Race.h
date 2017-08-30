#pragma once
#include <vector>
#include "Line.h"
class Race
{
public:
	Race(double raceLen, int runNum);
	double raceLength, raceMidPointLength;
	int sensorLoc0=0, sensorLoc1=1, FinishSensorLoc=2;
	int startTime=0, suspiciousSpeed =5;
	int RunnerNumber;
	std::vector<Line> GetRaceInfo(std::string filename);
};

