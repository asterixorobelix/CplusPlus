/*
Write a function which takes an array of integers and the size of the array as input. The program should return the greatest integer in the array.

The program should use a dynamic array
*/
#include <iostream>

typedef int* IntPtr;
IntPtr GetInput(int& size); 
void Greatest(int arr[], int size);

int main() {
	int arraySize;
	IntPtr k = 	GetInput(arraySize);
	Greatest(k, arraySize);

	delete k;
}

void Greatest(int arr[], int size) {
	int Largest{ 0 };

	for (int i = 0; i < size; i++) {
		if (arr[i] > Largest) {
			Largest = arr[i];
		}
	}

	std::cout << "The largest is: " << Largest << std::endl;
}

IntPtr GetInput(int& size) {
	std::cout << "Enter the size of the array: \n";
	std::cin >> size;

	int z{ 0 }, entry;

	IntPtr p = new int[size];

	while (z < size) {
		std::cout << "Enter a value: \n";
		std::cin >> entry;

		p[z] = entry;
		z++;
	}

	return p;
}