#include "ArrayFile.h"
#include <array>
#include <fstream>
#include <iostream>

ArrayFile::ArrayFile(string name)
{
	_Extension = ".txt";
	_FileName = name;
	_uniqueEntries = 0;

}

void ArrayFile::GetElementCount() {
	int arraySize{ 0 };
	array<int, 50> IntArray = GetArray(arraySize);
	GetUniqueEntries(IntArray, _uniqueEntries);
	
}

array<int,50> ArrayFile::GetArray(int& count) {
	array <int, 50> intArray;

	std::ifstream input;
	input.open(_FileName+_Extension);

	if (input.fail()) {
		std::cout << "Failed to open input file\n";
		exit(1);
	}

	int currentInt;

	while (!input.eof()) {
		input >> currentInt;
		intArray[count] = currentInt;
		count++;
	}
	std::cout << "Successfully read contents of file into array\n";
	std::cout << "There are " << count << " elements in the array\n";
	return intArray;
}

array<int,50> ArrayFile::GetUniqueEntries(array<int,50> ar, int& c) {
	array<int, 50> unique;
	bool found;
	for each (int entry in ar)
	{
		int currentInt = entry;
		found = false;

		for each (int i in unique)
		{

			if (currentInt == i) {
				found = true;
			}
		}
		if (!found) {
			unique[c] = currentInt;
			c++;
		}
	}
	std::cout << "There are " << c << " unique entries in the array\n";
	std::cout << "The entries are: \n";

	for (int i = 0; i < c; i++) {
		std::cout << unique[i] << " ";
	}
	std::cout << "\n";
	return unique;
}

