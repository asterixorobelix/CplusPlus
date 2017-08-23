/*
Sometimes, I want to quickly be able to convert miles per imperial gallon into kilometers per liter.
Create an application which will display the number of kilometers per liter (output) based on the number of miles per imperial gallon (input).
Make sure to round off the result to two decimal points. If the answer ends with a 0, it should be rounded off without the 0. So instead of 5.50, we should get 5.5.
1 Imperial Gallon = 4.54609188 litres 1 Mile = 1.609344 kilometres
eg: converter(12) should return 4.25
*/
#include <cmath>
#include <iostream>

double converter(int mpg);

int main() {
	converter(12);
	converter(24);

}

double converter(int mpg) {
	const double GallonToLitre = 4.54609188;
	const double MileToKM = 1.609344;

	double KPL = (mpg*MileToKM) / GallonToLitre;
	double rounded = round(KPL*100)/100.0;
	std::cout << "Result: " << rounded << std::endl;
	return rounded;
}