#pragma once
#include <vector>
#include "Line.h"
#include "Race.h"
class Racer
{
public:
	Racer();
	void GetRaceTimeAndAverage(Race race);
	void GetOverallFinishPlace(Race race);
	void DetectCheating(Race race);
	int id;
private:
	int racetimeMins, placing;
	double raceAverageTime;
};



