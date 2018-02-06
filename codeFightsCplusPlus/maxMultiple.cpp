/*
Given a divisor and a bound, find the largest integer N such that:

    N is divisible by divisor.
    N is less than or equal to bound.
    N is greater than 0.

It is guaranteed that such a number exists.

Example

For divisor = 3 and bound = 10, the output should be
maxMultiple(divisor, bound) = 9.

The largest integer divisible by 3 and not larger than 10 is 9.

Input/Output

    [time limit] 500ms (cpp)

    [input] integer divisor

    Constraints:
    2 ≤ divisor ≤ 10.

    [input] integer bound

    Constraints:
    5 ≤ bound ≤ 100.

    [output] integer

    The largest integer not greater than bound that is divisible by divisor.
*/

#include <iostream>
#include <cmath>

int maxMultiple(int divisor, int bound);

int main(){
    std::cout<<"divisor:\n";

    int divisor, bound;

    std::cin>>divisor;

    std::cout<<"bound: \n";

    std::cin>>bound;

    int answer= maxMultiple(divisor, bound);

    std::cout<<"Solution: "<<answer<<std::endl;
}

int maxMultiple(int divisor, int bound) {

    float solution{1.3};

    while(fmod(solution,1)!=0)//% is only for integers. fmod is for floating pt. http://www.cplusplus.com/reference/cmath/fmod/
    {
        solution =static_cast<double>(bound)/divisor;
        //std::cout<<"Temporary solution: "<<solution<<std::endl;
        bound-=1;

    }
    return bound+1;

}

