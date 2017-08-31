/*
chapter3, page 204, programming projects 2
A triangle can be of three types: all sides are equal, only two sides are equal, all three sides are unequal.
Write a program which allows the user to enter the three sides of the triangle. Use three double variables to store the triangle sides.
The program should print the three angles if the triangle is equilateral.
If the triangle is isosceles, it should prompt the user to input the odd angle and the program should print the remaining angles.
If all the sides are unequal, the program should do nothing.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<double> GetInput();

int main() {
	vector<double> result = GetInput();
}

vector<double> GetInput() {
	cout << "Enter three lengths representing the triangle sides: \n";
	int i = 1;
	double side;
	vector<double> sides;
	
	while (i <= 3) {
		cout << "Enter the length of side " << i << ":\n";
		cin >> side;
		sides.push_back(side);
		i++;
	}

	return sides;
}