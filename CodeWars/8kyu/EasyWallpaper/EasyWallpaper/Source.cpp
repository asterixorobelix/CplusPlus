/*
John wants to decorate a room with wallpaper. He has been told that making sure he has the right amount of wallpaper is more complex than it sounds. 
John knows that the rectangular room has a length of l meters, a width of w meters, a height of h meters. The standard width of the rolls he wants to buy is 52 centimeters. 
The length of a roll is 10 meters. It’s best to have an extra length of wallpaper handy in case of mistakes, so he wants to buy a length 15% greater than the one he needs.

Your function wallpaper(l, w, h) should return as a plain English word in lower case the number of rolls he must buy.
#Example: wallpaper(4, 3.5, 3) should return "ten"

#Notes:

0 <= l, w, h (floating numbers), it can happens that w x h x l is zero
the integer r (number of rolls) will always be less or equal to 20
*/
#include <string>
#include <iostream>
#include <cmath>

void wallpaper(double l, double w, double h);

int main() {
	wallpaper(4, 3.5, 3);
}

void wallpaper(double l, double w, double h) {
	std::cout << "l :" << l << std::endl;
	std::cout << "w :" << w << std::endl;
	std::cout << "h :" << h << std::endl;

	const double ROLLWIDTH = 0.52; //m
	const double ROLLLENGTH = 10; //m
	const double MISTAKES = 0.15;  //m
	const double ROLLAREA = ROLLWIDTH*ROLLLENGTH;

	double lengthArea =abs( l*h);
	double widthArea =abs( w*h);

	double totalArea = (widthArea + lengthArea)*(1+MISTAKES)*2;//two walls per room!
	std::cout << "Total area: " << totalArea << std::endl;

	int RollNumber =round( totalArea / ROLLAREA);
	std::cout << "Roll number: " << RollNumber << std::endl;

}