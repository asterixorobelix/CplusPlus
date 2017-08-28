/*
In a small town the population is p0 = 1000 at the beginning of a year. 
The population regularly increases by 2 percent per year and moreover 50 new inhabitants per year come to live in the town. 
How many years does the town need in order to see its population be greater than or equal to p = 1200 inhabitants?

At the end of the first year there will be:
1000 + 1000 * 0.02 + 50 => 1070 inhabitants
At the end of the 2nd year there will be:
1070 + 1070 * 0.02 + 50 => 1141 inhabitants (number of inhabitants is an integer)
At the end of the 3rd year there will be:
1141 + 1141 * 0.02 + 50 => 1213
It will need 3 entire years.

More generally given parameters:

p0, percent, aug (inhabitants coming or leaving each year), p (population to surpass);
the function nb_year should return n number of entire years needed to get a population greater or equal to p.

aug is an integer (> 0), percent a positive or null floating number, p0 and p are positive integers (> 0)

Examples:
nb_year(1500, 5, 100, 5000) -> 15
nb_year(1500000, 2.5, 10000, 2000000) -> 10
Note: Don't forget to convert the percent parameter as a percentage in the body of your function: if the parameter percent is 2 you have to convert it to 0.02.

Sample Output:
p0: 1500
Percent: 5
New inhabitants: 100
Target population: 5000
The required number of years is: 15
p0: 1500000
Percent: 2.5
New inhabitants: 10000
Target population: 2000000
The required number of years is: 10
p0: 1500000
Percent: 2.5
New inhabitants: -10000
Target population: 2000000
The required number of years is: 16
p0: 1500000
Percent: 0
New inhabitants: 10000
Target population: 2000000
The required number of years is: 50
*/
#include "Arge.h"

int main() {
	Arge::nbYear(1500, 5, 100, 5000);
	Arge::nbYear(1500000, 2.5, 10000, 2000000);
	Arge::nbYear(1500000, 2.5, -10000, 2000000);

	Arge::nbYear(1500000, 0, 10000, 2000000);
}