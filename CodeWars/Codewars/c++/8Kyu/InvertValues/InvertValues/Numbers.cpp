#include "Numbers.h"
#include <iostream>

void Numbers::Invert(vector<int> nums) {
	std::cout << "Original numbers: ";

	for (int i=0;i<nums.size();i++)
	{
		std::cout << nums[i] << " ";
		nums[i] *= -1;

	}

	std::cout << std::endl;

	std::cout << "Inverted numbers: " << std::endl;
	for each (int num in nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

