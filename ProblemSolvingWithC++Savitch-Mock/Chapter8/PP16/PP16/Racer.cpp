#include "Racer.h"
#include <iostream>

Racer::Racer() {
	placing = 0;
}

void Racer::GetRaceTimeAndAverage(Race race) {

	for each (Line line in race.RaceData)
	{
		if (line.loc == race.FinishSensorLoc&&line.rId == this->id) {
			this->racetimeMins = line.timeMin - race.startTime;
			break;
		}
	}

	std::cout << "The overall racetime, in minutes, for racer: " << this->id << " is: " << this->racetimeMins << std::endl;

	this->raceAverageTime = this->racetimeMins / race.raceLength;

	std::cout << "The average racetime, in minutes, for racer: " << this->id << " is: " << this->raceAverageTime << std::endl;

	GetOverallFinishPlace(race);
}

void Racer::GetOverallFinishPlace(Race race) {

	for each (Line line in race.RaceData)
	{
		if (line.rId != this->id && line.loc == race.FinishSensorLoc) {
			if (line.timeMin < this->racetimeMins) {
				this->placing++;
			}
			else {
				this->placing--;
			}
		}
	}

	this->placing = race.RunnerNumber - 1 + this->placing;

	std::cout << "The placing of runner: " << this->id << " is: " << this->placing << std::endl;
}

void Racer::DetectCheating(Race race) {
	double averageSpeed;

	for (int i = 0; i<race.RaceData.size(); i++)
	{
		if (race.RaceData[i].loc > 0 && race.RaceData[i].rId == this->id) {
			averageSpeed = (race.RaceData[i].timeMin - race.RaceData[i - 1].timeMin) / race.raceMidPointLength;
			if (averageSpeed > race.suspiciousSpeed) {
				std::cout << "The racer with the id: " << this->id << " is a cheat\n";
				exit(1);
			}
		}
	}
}