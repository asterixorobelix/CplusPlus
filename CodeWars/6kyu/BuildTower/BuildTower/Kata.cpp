#include "Kata.h"
#include <string>
#include <iostream>

Kata::Kata()
{
}

/*

'  *  '
' *** '
'*****'

*/

std::vector<std::string> Kata::towerBuilder(int nFloors) {
	std::vector<std::string> result;
	int i{ 1 };
	int perLine = nFloors + 2;
	std::string line;
	std::string prefix;

	while (i <= nFloors) {
		int k = 1, j=1;
		int diff = (perLine - i) / 2;

		while (j <= perLine) {
			prefix += " ";
			j++;
		}

		while (k <= i) {
			line += "*";
			k++;
		}

		result.push_back(prefix+line+prefix);
		i++;
	}

	for each (std::string l in result)
	{
		std::cout << l << std::endl;
	}

	return result;
}