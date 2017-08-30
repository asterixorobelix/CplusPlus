/*
pg 535 Savitch, progProj16, chapter 8.
In many races, competitors wear an RFID tag on their shoe.
In this problem, there are three sensors, at the start, at the 7 mile point and at the finish line; after 13.1 miles.
Below is sample data for three racers. The first line is the gun time in 24 hour format (HH MM SS).
Subsequent lines contain the sensor ID (0=start, 1 = mile 7, 2=finish), followed by the racer's number, followed by the time stamp.
08 00 00
0 100 08 00 00
0 132 08 00 03
The IDs of the 5 racers are as follows: 100, 132, 140, 156 and 182.
The race log is contained in a file called racelog.txt. Write a program which takes the log data and allows a user to enter a racer's number.
The program should then ouput the racer's overall finish place, overall race time and overall minutes/mile.
The program should also detect cheating. If a racer misses a sensor, they are a cheat. If their race is suspiciously fast (faster than 5 minutes per mile), they are a cheat.
output a list of suspected cheats.
Sample output:
Enter raceNumber:
100
You entered: 100
start time: 08 02 00
finish time: 09 35 10
overall minutes/mile: 2.59524
finish placing: 3

Enter raceNumber:
132
You entered: 132
start time: 08 02 00
finish time: 09 34 15
overall minutes/mile: 2.59524
finish placing: 2
*/

#include <vector>
#include <fstream>
#include <iostream>
#include "Line.h"
#include "Racer.h"
#include "Race.h"

std::vector<Line> GetRaceInfo(std::string filename, Race race);
void GetRaceTimeAndAverage(std::vector<Line> data, Racer Runner, Race race);
void GetOverallFinishPlace(std::vector<Line> data, Racer Runner, Race race);

int main() {
	int racerId=132;
	Racer runner = Racer();
	Race Argus = Race(13.1,5);//finish length in miles
	runner.id = racerId;
	std::vector<Line> RaceData = GetRaceInfo("racelog.txt",Argus);
	GetRaceTimeAndAverage(RaceData, runner, Argus);
}

std::vector<Line> GetRaceInfo(std::string filename, Race race) {
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
	race.startTime = hour * 60 + min + sec/ 60;

	while (!input.eof()) {
		input >> line.loc >> line.rId;
		input >> hour >> min >> sec;
		line.timeMin = hour * 60 + min + sec / 60;
		//std::cout << line.loc<<" "<<line.rId<<" "<<line.timeMin << std::endl;
		raceInfo.push_back(line);
	}

	return raceInfo;
}

void GetRaceTimeAndAverage(std::vector<Line> data, Racer Runner, Race race) {

	for each (Line line in data)
	{
		if (line.loc == race.FinishSensorLoc&&line.rId ==Runner.id) {
			Runner.racetimeMins = line.timeMin-race.startTime;
			break;
		}
	}

	std::cout << "The overall racetime, in minutes, for racer: " << Runner.id << " is: " << Runner.racetimeMins << std::endl;

	Runner.raceAverageTime = Runner.racetimeMins / race.raceLength;

	std::cout << "The average racetime, in minutes, for racer: " << Runner.id << " is: " << Runner.raceAverageTime << std::endl;

	GetOverallFinishPlace(data, Runner, race);
}

void GetOverallFinishPlace(std::vector<Line> data, Racer Runner, Race race) {

	for each (Line line in data)
	{
		if (line.rId != Runner.id&&line.loc == race.FinishSensorLoc) {
			if (line.timeMin < Runner.racetimeMins) {
				Runner.placing++;
			}
			else {
				Runner.placing--;
			}
		}
	}

	Runner.placing = race.RunnerNumber - 1 + Runner.placing;

	std::cout << "The placing of runner: " << Runner.id << " is: " <<Runner.placing << std::endl;
}