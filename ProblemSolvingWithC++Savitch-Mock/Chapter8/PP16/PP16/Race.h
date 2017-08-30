#pragma once
class Race
{
public:
	Race(double raceLen);
	double raceLength, raceMidPointLength;
	int sensorLoc0=0, sensorLoc1=1, FinishSensorLoc=2;
	int startTime=0, suspiciousSpeed =5;
};

