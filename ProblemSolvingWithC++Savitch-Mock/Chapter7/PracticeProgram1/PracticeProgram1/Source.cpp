/*
Write a function which takes an array of integers and the size of the array as input. The program should return the greatest integer in the array.
*/
#include <iostream>
void Greatest(int numbers[], int size);

int main() {
	int s = 5;
	int input[] = { 2, 55, 8, 43,99 };

	Greatest(input, s);
}

void Greatest(int numbers[], int size) {
	int Largest{ 0 };

	for (int i = 0; i < size; i++) {
		if (numbers[i] > Largest) {
			Largest = numbers[i];
		}
	}

	std::cout << "The largest number in the array is: " << Largest << std::endl;
}