/*
Chapter 1, programming project 4

Write a program which calculates the pressure of water in a container.
The program should allow the user to enter the mass, depth and volume of water in the container.
Assume that there is a constant acceleration of 9.2 m/s due to gravity.
Use the equation:
Pressure = (mass*depth*acceleration)/volume

Sample Output:
The pressure in the vessel is: 309.659
*/

#include <iostream>
using namespace std;
void CalculatePressure(double mass, double depth, double volume);

int main() {
	CalculatePressure(120 /*mass*/, 3.45 /*depth*/, 12.3 /*volume*/);

}

void CalculatePressure(double mass, double depth, double volume) {
	const double GravityAccel = 9.2; //m/s
	double Pressure = (mass*depth*GravityAccel) / volume;

	cout << "The pressure in the vessel is: " << Pressure << endl;
}