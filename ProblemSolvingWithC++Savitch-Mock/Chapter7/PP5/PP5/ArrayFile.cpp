#include "ArrayFile.h"
#include <array>
#include <fstream>
#include <iostream>
#include <iomanip>

ArrayFile::ArrayFile(string name)
{
	_Extension = ".txt";
	_FileName = name;
	_uniqueEntries = 0;

}

void ArrayFile::GetElementCount() {
	int arraySize{ 0 };
	array<int, 50> IntArray = GetArray(arraySize);

	array<int, 50> UniqueEnt = GetUniqueEntries(IntArray, _uniqueEntries);
	array<int, 50> UniqueEntCount =GetEntryCount(UniqueEnt, IntArray, _uniqueEntries);

	PrintResult(UniqueEnt, UniqueEntCount, _uniqueEntries);
	
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

array<int, 50> ArrayFile::GetEntryCount(array<int, 50> Unique,array<int,50> ar2, int c) {
	int i{ 0 }, q{ 0 };
	array<int, 50> count;

	for each (int var in Unique)
	{
		i = 0;
		for each (int num in ar2)
		{
			if (num==var)
			{
				i++;
			}
		}
		count[q] = i;
		q++;
	}

	std::cout << "Count of unique elements: \n";
	for (int z=0; z<c;z++)
	{
		std::cout << count[z]<< " ";
	}
	std::cout << "\n";
	return count;
}

void ArrayFile::PrintResult(array <int, 50> ar, array<int, 50> ar2, int c) {//UniqueEnt, UniqueEntCount, _uniqueEntries
	std::cout.setf(ios::right);	
	std::cout.width(10);
	setw(10);
	std::cout << "\nN "<<"Count" << std::endl;
	for (int i = 0; i < c; i++) {
		std::cout << ar[i] << " " << ar2[i] << std::endl;
	}
}

