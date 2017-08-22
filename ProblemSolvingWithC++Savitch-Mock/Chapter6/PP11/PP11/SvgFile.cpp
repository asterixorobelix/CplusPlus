#include "SvgFile.h"
#include <iostream>

SvgFile::SvgFile()
{
}

string SvgFile::GetHeader() {
	std::string header = "<?xml version=""1.0"" standalone=""no""?>\n<!DOCTYPE svg PUBLIC ""-//W3C//DTD SVG 1.1//EN""\n""http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd"">\n<svg width = ""500"" height = ""500""\nxmlns = ""http://www.w3.org/2000/svg"">";
	return header;
}

string SvgFile::GetFooter() {
	return "</svg>";
}

int* SvgFile::GetInput() {//in c++ you cant return an array directly, you have to return a pointer to the array
	const int MAX = 4;
	int currentEntry;

	int numbers[MAX];

	for (int i = 0; i < size(numbers); i++) {
		std::cout << "Enter a number\n";
		std::cin >> currentEntry;
		currentEntry = VerifyInput(currentEntry);
	}
}

int SvgFile::VerifyInput(int num) {
	const int MAX = 400;

	if (num > MAX) {
		std::cout << "Input exceeds the maximum of " << MAX << std::endl;
		return MAX;
	}

	else {
		return num;
	}
}