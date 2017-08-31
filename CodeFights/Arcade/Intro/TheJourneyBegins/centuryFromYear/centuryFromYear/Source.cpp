/*
Given a year, return the century it is in.
The first century spans from the year 1 up to and including the year 100, the second - from the year 101 up to and including the year 200, etc.
Example

For year = 1905, the output should be
centuryFromYear(year) = 20;
For year = 1700, the output should be
centuryFromYear(year) = 17.

Input/Output
[input] integer year
A positive integer, designating the year.

Guaranteed constraints:
1<=year<=2005.

[output] integer
The number of the century the year is in.

Sample Output:
Year: 1905
Century: 20
Year: 1700
Century: 17
*/
#include <iostream>

int centuryFromYear(int year);

int main() {
	centuryFromYear(1905);
	centuryFromYear(1700);
}

int centuryFromYear(int year) {
	std::cout << "Year: " << year << std::endl;
	int century, first, second;
	
	first = year / 100;
	second = year - first * 100;

	if (second == 0) {
		second = 0;
	}

	else {
		second = 1;
	}
	century = first + second;

	std::cout << "Century: " << century << std::endl;
	return century;
}