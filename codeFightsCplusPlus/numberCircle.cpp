/*Consider integer numbers from 0 to n - 1 written down along the circle in such a way that the distance between any two neighbouring numbers is equal (note that 0 and n - 1 are neighbouring, too).

Given n and firstNumber, find the number which is written in the radially opposite position to firstNumber.

Example

For n = 10 and firstNumber = 2, the output should be
circleOfNumbers(n, firstNumber) = 7.

Input/Output

    [time limit] 500ms (cpp)

    [input] integer n

    A positive even integer.

    Constraints:
    4 ≤ n ≤ 20.

    [input] integer firstNumber

    Constraints:
    0 ≤ firstNumber ≤ n - 1.

    [output] integer
*/
#include <iostream>

int circleOfNumbers(int n, int firstNumber);

int main (){
	std::cout<<"n:\n";

    int n, firstNumber;

    std::cin>>n;

    std::cout<<"firstNumber: \n";

    std::cin>>firstNumber;

    int answer= circleOfNumbers(n,firstNumber);

    std::cout<<"Solution: "<<answer<<std::endl;
}

int circleOfNumbers(int n, int firstNumber) {
	int half, opposite;

	half=(n/2)-1;

	opposite=firstNumber+half+1;

	if (opposite>(n-1)){
		opposite-=n;
	}

	return opposite;
}
