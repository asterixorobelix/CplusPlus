#include "Wallpaper.h"
#include <string>
#include <iostream>


Wallpaper::Wallpaper()
{
}

std::string Wallpaper::wallPaper(double l, double w, double h) {
	std::cout << "l :" << l << std::endl;
	std::cout << "w :" << w << std::endl;
	std::cout << "h :" << h << std::endl;

	const double ROLLWIDTH = 0.52; //m
	const double ROLLLENGTH = 10; //m
	const double MISTAKES = 0.15;  //m
	const double ROLLAREA = ROLLWIDTH*ROLLLENGTH;

	double lengthArea = abs(l*h);
	double widthArea = abs(w*h);

	double totalArea = (widthArea + lengthArea)*(1 + MISTAKES) * 2;//two walls per room!
	std::cout << "Total area: " << totalArea << std::endl;

	int RollNumber = round(totalArea / ROLLAREA);
	std::string Rolls = ReturnWord(RollNumber);
	std::cout << "Number of rolls to buy: " << Rolls << std::endl;
	return Rolls;
}

std::string ReturnWord(int num) {
	static std::string words[21] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" };
	return words[num];
}

