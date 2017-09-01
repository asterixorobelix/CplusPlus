/*
Build a program which can build towers in the console output.
The method towerBuilder(int nFloors), where nFloors is the number of floors (integer and always greater than 0).
The method should return a vector<string>;

for example, a tower of 3 floors is shown below

[
'  *  ',
' *** ',
'*****'
]
*/
#include "Kata.h"

int main() {
	Kata kata = Kata();
	kata.towerBuilder(3);
}