/*
Given an array of integers, return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.
If the input array is empty or null, return an empty array:
The array given as a parameter should NOT be changed.

For example:

input vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15}
return vector<int>  {10, -65}
*/
#include <iostream>
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input);

int main() {
	std::vector<int> in= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
	std::vector<int> in2 = { 0, 2, 3, 0, 5, 6, 7, 8, 9,	10,	-11, -12, -13, -14 };

	std::vector<int> results = countPositivesSumNegatives(in);

	for each (int var in results)
	{
		std::cout << var << std::endl;
	}
}

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
	int negSum =0, posCount =0;

	for each (int num in input)
	{
		if (num > 0) {
			posCount++;
		}
		else {
			negSum += num;
		}
	}
	std::vector<int> result;

	result.push_back(posCount);
	result.push_back(negSum);
	return result;
}