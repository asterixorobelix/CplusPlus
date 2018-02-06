/*Given an integer n, return the largest number that contains exactly n digits.

Example

For n = 2, the output should be
largestNumber(n) = 99.

Input/Output

    [time limit] 500ms (cpp)

    [input] integer n

    Constraints:
    1 ≤ n ≤ 7.

    [output] integer

    The largest integer of length n.

*/
#include <iostream>
#include <cmath>

int largestNumber(int n);

int main(){
	std::cout<<"Enter an integer: \n";

	int entry;

	std::cin>>entry;

	int result=largestNumber(entry);

	std::cout<<"The largest number is: "<<result<<std::endl;
}

int largestNumber(int n) {

	int answer {0}, i{0};

	while (i<n){
		answer=answer+9*pow(10,i); //pow (base,exponent)
		++i;
	}

	return answer;
}