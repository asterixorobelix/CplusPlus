/*
Wilson primes satisfy the following condition. Let P represent a prime number.
Then ((P-1)! + 1) / (P * P) should give a whole number. 4! is shorthand for 4 x 3 x 2 x 1
Your task is to create a function which returns true if the given number is a Wilson prime.
eg: amIWilson(9) should return false, amIWilson(5) should return true

sample Output:
n: 9
Result: 497.79
This number is a wilson prime: 0
n: 5
Result: 1
This number is a wilson prime: 1
*/
#include <iostream>

bool amIWilson(unsigned n);

int main() {
	std::cout << "This number is a wilson prime: " << amIWilson(9) << std::endl;
	std::cout<<"This number is a wilson prime: "<<amIWilson(5)<<std::endl;
}

bool amIWilson(unsigned n) {
	std::cout << "n: " << n << std::endl;
	int factorial =1, remainder;
	double result;

	for (int p = n-1; p > 1; p--) {
		factorial *= p;
	}

	result = (factorial + 1) / static_cast<double>(n*n);
	std::cout << "Result: " << result << std::endl;
	
	if (result - static_cast<int>(result) != 0) {
		return false;
	}

	else {
		return true;
	}
	
}