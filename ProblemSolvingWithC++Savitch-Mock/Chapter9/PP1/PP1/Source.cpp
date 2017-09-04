/*
Chapter 9, programming project 1
Write a program which reads in a list of integers into an array with base type int.
The program should request a file name.
Use a dynamic array.
Your program should determine how many entries there are. The output is to be a two-column list.
The first column is a list of the distinct array elements;
the second column is the count of the number of occurrences of each element. The list should be sorted on entries in the first column, largest to smallest.
For example, for the input:
-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12
the output should be:
N Count
4 2
3 3
2 2
1 4
-1 1
-12 4
*/

#include <fstream>
#include <iostream>
#include <string>
typedef int* IntPtr;

IntPtr GetData(std::string filename);

int main() {
	IntPtr a = GetData("IntegerList.txt");
}

IntPtr GetData(std::string filename) {
	std::ifstream data;
	data.open(filename);
	int size{ 0 }, number;

	while (!data.eof()) {
		data >> number;
		size++;
	}
	data.close();

	data.open(filename);

	IntPtr Arr = new int[size];
	int i{ 0 };

	while (i < size) {
		
		data >> number;
		std::cout << number << std::endl;
		Arr[i] = number;
		i++;
	}
	return Arr;
}