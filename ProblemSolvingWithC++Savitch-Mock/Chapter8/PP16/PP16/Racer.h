#pragma once
#include <vector>
#include "Line.h"
#include "Race.h"
class Racer
{
public:
	Racer();
	void GetRaceTimeAndAverage(std::vector<Line> data, Race race);
	void GetOverallFinishPlace(std::vector<Line> data, Race race);
	void DetectCheating(std::vector<Line> data, Race race);
	int id;
private:
	int racetimeMins, placing;
	double raceAverageTime;
};



