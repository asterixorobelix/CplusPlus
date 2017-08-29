/*
pg 535 Savitch, progProj16, chapter 8.
In many races, competitors wear an RFID tag on their shoe.
In this problem, there are three sensors, at the start, at the 7 mile point and at the finish line; after 13.1 miles.
Below is sample data for three racers. The first line is the gun time in 24 hour format (HH MM SS).
Subsequent lines contain the sensor ID (0=start, 1 = mile 7, 2=finish), followed by the racer's number, followed by the time stamp.
08 00 00
0 100 08 00 00
0 132 08 00 03
The IDs of the racers are as follows: 100, 132, 140, 156 and 182.
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

int main() {
	std::ifstream input;
	input.open("racelog.txt");

	if (input.fail()) {
		std::cout << "Failed to open file\n";
		exit(1);
	}

	std::vector<Line> testVector;
	Line line = Line();

	while (!input.eof()) {
		input >> line.loc >> line.rId;
		//std::cout << line.loc << " " << line.rId << std::endl;
		testVector.push_back(line);
	}

	for each (Line l in testVector)
	{
		std::cout << l.loc << " " << l.rId << std::endl;
	}

}