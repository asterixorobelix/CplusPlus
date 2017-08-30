#pragma once
class Racer
{
public:
	Racer();
	int racetimeMins, id, placing;
	double raceAverageTime;
};

Racer::Racer() {
	placing = 0;
}

