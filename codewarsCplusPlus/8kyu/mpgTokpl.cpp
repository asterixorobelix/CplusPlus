/*
Create an application that will display the number of kilometers per liter (output) based on the number of miles per imperial gallon (input).

Make sure to round off the result to two decimal points. 

Some useful associations relevant to this kata: 1 Imperial Gallon = 4.54609188 litres 1 Mile = 1.609344 kilometres

Sample Output:
Enter mpg: 
23.5

23.50 miles per gallon is 8.32 km per liter

*/
#include <iostream>

int main(){

	constexpr float gallonToLitre = 4.54609188, mileToKm = 1.609344;

	std::cout<<"Enter mpg:\n";

	float mpg, kml;

	std::cin>>mpg;

	kml = mpg*(mileToKm/gallonToLitre);

	std::cout.setf(std::ios::fixed);// 	display floating point numbers in normal notation - no trailing zeroes and no scientific notation
	std::cout.setf(std::ios::showpoint); // show the decimal point for all floats. Display decimal point and trailing zeros for all floating point numbers, even if the decimal places are not needed.
	std::cout.precision(2);//sets this number to be two decimal points

	std::cout<<mpg<<" mpg is "<<kml<<" km/l\n";

	return kml;
}