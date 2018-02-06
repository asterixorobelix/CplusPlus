/*
For a pole vaulter, it is very important to begin the approach run at the best possible starting mark. This is affected by numerous factors and requires fine-tuning in practice. But there is a guideline that will help a beginning vaulter start at approximately the right location for the so-called "three-step approach," based on the vaulter's body height.

You are given the following two guidelines to begin with: (1) A vaulter with a height of 1.52 meters should start at 9.45 meters on the runway. 
(2) A vaulter with a height of 1.83 meters should start at 10.67 meters on the runway.

You will receive a vaulter's height in meters (which will always lie in a range between a minimum of 1.22 meters and a maximum of 2.13 meters). 
Your job is to return the best starting mark in meters, rounded to two decimal places.

Hint: Based on the two guidelines given above, you will want to account for the change in starting mark per change in body height.

Sample Output:
Enter vaulter's height in meters: 
3.4
Starting distance: 16.8487 m

*/
#include <iostream>

int main(){
	//y=mx+c
	//startingMark=m*height+c
	//startingMark =(changeInStartMark/changeInHeight)*height+c
	constexpr float m = (10.67-9.45)/(1.83-1.52);
	constexpr float c = 10.67-m*1.83;

	std::cout<<"Enter vaulter's height in meters: \n";

	float height, distance;

	std::cin>>height;

	distance = m*height+c;

	std::cout<<"Starting distance: "<<distance<<" m\n";

	std::cout.setf(std::ios::fixed);// 	display floating point numbers in normal notation - no trailing zeroes and no scientific notation
	std::cout.setf(std::ios::showpoint); // show the decimal point for all floats. Display decimal point and trailing zeros for all floating point numbers, even if the decimal places are not needed.
	std::cout.precision(2);//sets this number to be two decimal points

}