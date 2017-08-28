#include "Arge.h"
#include <iostream>


Arge::Arge()
{
}


int Arge::nbYear(int p0, double percent, int aug, int p) {
	std::cout << "p0: " << p0 << std::endl;
	std::cout << "Percent: " << percent << std::endl;
	std::cout << "New inhabitants: " << aug << std::endl;
	std::cout << "Target population: " << p << std::endl;

	int currentPop, YearNumber{ 0 };
	double growth = percent / 100;

	int previousPop = p0;

	while (previousPop < p) {
		currentPop = (1 + growth)*previousPop + aug;
		previousPop = currentPop;
		YearNumber++;
	} 

	std::cout << "The required number of years is: " << YearNumber << std::endl;
	return YearNumber;
}

/*
int Arge::nbYear(int p0, double percent, int aug, int p) {
int ret{0};
percent = (percent + 100) / 100;
while (p0 < p) {
p0 = p0 * percent + aug;
ret++;
}
return ret;

*/