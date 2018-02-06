/*
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
Notes:

All values are greater than INT_MIN
The input should be modified, not returned.

Sample Output:
Original numbers: 1 -2 3 4 5
Inverted numbers:
-1 2 -3 -4 -5
***********************
No numbers were entered
*/

#include <vector>
#include "Numbers.h"
using namespace std;

int main() {
	vector<int> Numbs = { 1,-2,3,4,5 };
	Numbers::Invert(Numbs);

	vector<int> numb1 = {};
	Numbers::Invert(numb1);

}
