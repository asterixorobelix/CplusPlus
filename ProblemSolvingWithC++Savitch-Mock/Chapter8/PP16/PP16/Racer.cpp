#include "Racer.h"
#include <iostream>

Racer::Racer() {
	placing = 0;
}

void Racer::GetRaceTimeAndAverage(std::vector<Line> data, Race race) {

	for each (Line line in data)
	{
		if (line.loc == race.FinishSensorLoc&&line.rId == this->id) {
			this->racetimeMins = line.timeMin - race.startTime;
			break;
		}
	}

	std::cout << "The overall racetime, in minutes, for racer: " << this->id << " is: " << this->racetimeMins << std::endl;

	this->raceAverageTime = this->racetimeMins / race.raceLength;

	std::cout << "The average racetime, in minutes, for racer: " << this->id << " is: " << this->raceAverageTime << std::endl;

	GetOverallFinishPlace(data, race);
}

void Racer::GetOverallFinishPlace(std::vector<Line> data, Race race) {

	for each (Line line in data)
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

void Racer::DetectCheating(std::vector<Line> data, Race race) {
	double averageSpeed;

	for (int i = 0; i<data.size(); i++)
	{
		if (data[i].loc > 0 && data[i].rId == this->id) {
			averageSpeed = (data[i].timeMin - data[i - 1].timeMin) / race.raceMidPointLength;
			if (averageSpeed > race.suspiciousSpeed) {
				std::cout << "The racer with the id: " << this->id << " is a cheat\n";
				exit(1);
			}
		}
	}
}