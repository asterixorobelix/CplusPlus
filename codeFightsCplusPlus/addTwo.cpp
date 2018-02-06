/*You are given a two-digit integer n. Return the sum of its digits.

Example

For n = 29, the output should be
addTwoDigits(n) = 11.

Input/Output

    [time limit] 500ms (cpp)

    [input] integer n

    A positive two-digit integer.

    Constraints:
    10 ≤ n ≤ 99.

    [output] integer

    The sum of the first and second digits of the input number.

*/

#include <iostream>

int addTwoDigits(int n);

int main(){
	std::cout<<"Enter a two digit integer: \n";

	int entry;

	std::cin>>entry;

	int result=addTwoDigits(entry);

	std::cout<<"The sum is: "<<result<<std::endl;
}

int addTwoDigits(int n) {
    int a,b;
    
    a=n/10;
    std::cout<<"A: "<<a<<std::endl;
    b=n-a*10;

    std::cout<<"b: "<<b<<std::endl;
    
    return a+b;
}