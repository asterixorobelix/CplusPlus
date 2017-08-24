/*
Wilson primes satisfy the following condition. Let P represent a prime number.
Then ((P-1)! + 1) / (P * P) should give a whole number. 4! is shorthand for 4 x 3 x 2 x 1
Your task is to create a function which returns true if the given number is a Wilson prime.
eg: amIWilson(9) should return false, amIWilson(5) should return true

sample Output:
0 is false, 1 is true
n: 9
8
56
336
1680
6720
20160
40320
Result: 497.79
Bool: 0
this number is a wilson prime: 0
n: 5
4
12
24
Result: 1
Bool: 1
this number is a wilson prime: 1
n: 0
Result: inf
Bool: 0
this number is a wilson prime: 0
n: 20
19
342
5814
93024
1.39536e+06
1.9535e+07
2.53956e+08
3.04747e+09
3.35221e+10
3.35221e+11
3.01699e+12
2.41359e+13
1.68952e+14
1.01371e+15
5.06855e+15
2.02742e+16
6.08226e+16
1.21645e+17
Result: 3.04113e+14
Bool: 0
this number is a wilson prime: 0
*/
#include <iostream>

bool amIWilson(unsigned n);

int main() {
	std::cout << "0 is false, 1 is true\n";
	std::cout << "this number is a wilson prime: " << amIWilson(9) << std::endl;
	std::cout<<"this number is a wilson prime: "<< amIWilson(5)<<std::endl;
	std::cout << "this number is a wilson prime: " << amIWilson(0) << std::endl;
	std::cout << "this number is a wilson prime: " << amIWilson(20) << std::endl;
	//solution cannot deal with numbers larger than about 20.
	//this is causing overflow of the long double factorial; which is returning it to zero
	//std::cout << "This number is a wilson prime: " << amIWilson(563) << std::endl;
}

bool amIWilson(unsigned n) {
	std::cout << "n: " << n << std::endl;
	long double factorial =1, remainder;
	double result;
	bool wilson;

	for (int p = n-1; p > 1; p--) {
		factorial *= p;
		std::cout << factorial << std::endl;
	}

	result = (factorial + 1) / static_cast<double>(n*n);
	std::cout << "Result: " << result << std::endl;
	
	if (result - static_cast<int>(result) != 0) {
		std::cout << "Bool: " << false << std::endl;
		return false;
	}
	else if (n == 0 ||n==1) {
		std::cout << "Bool: " << false << std::endl;
		return false;
	}

	else {
		std::cout << "Bool: " << true << std::endl;
		return true;
	}
	
}