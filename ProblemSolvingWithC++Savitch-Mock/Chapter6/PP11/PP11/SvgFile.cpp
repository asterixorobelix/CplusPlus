#include "SvgFile.h"
#include <iostream>
#include <array>
#include <fstream>

SvgFile::SvgFile(std::string file):_FileExtension(".svg")
{
	_FileName = file;
}

string SvgFile::GetHeader() {
	std::string header = "<?xml version=""1.0"" standalone=""no""?>\n<!DOCTYPE svg PUBLIC ""-//W3C//DTD SVG 1.1//EN""\n""http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd"">\n<svg width = \"500\" height = \"500\"\nxmlns = ""http://www.w3.org/2000/svg"">";
	return header;
}

string SvgFile::GetFooter() {
	return "\n</svg>";
}

std::array<int,4> SvgFile::GetInput() {
	const int MAX = 4;
	int currentEntry;

	std::array<int, MAX> numbers;

	for (int i = 0; i < size(numbers); i++) {
		std::cout << "Enter a number\n";
		std::cin >> currentEntry;
		currentEntry=VerifyInput(currentEntry);
		numbers[i] = currentEntry;
	}

	std::cout << "The numbers are:\n";
	for each  (int num in numbers)
	{
		std::cout << num << std::endl;
	}
	return numbers;
}

int SvgFile::VerifyInput(int num) {
	const int MAX = 400;

	if (num > MAX) {
		std::cout << "Input exceeds the maximum of " << MAX << std::endl;
		std::cout << "Setting number to " << MAX << std::endl;
		return MAX;
	}

	else if (num < 0) {
		std::cout << "You cant input negative numbers\n";
		std::cout << "Setting number to zero\n";
		return 0;
	}

	else {
		return num;
	}
}

std::string SvgFile::GetRectangle(int coord) {
	std::cout << "coord: " << coord << std::endl;
	std::string x = "x=" + std::to_string(coord);
	std::string y = "y=" + std::to_string(coord);
	std::string h = "height=" + std::to_string(coord);

	std::string result = "\n<rect "+x+" "+y + " " +h+"/>";

	return result;
}

void SvgFile::CreateSVG() {
	std::array<int, 4> numbs = GetInput();

	ofstream out;
	out.open(_FileName + _FileExtension);

	out << GetHeader();

	for each (int num in numbs)
	{
		out << GetRectangle(num);
	}

	out << GetFooter();

	out.close();

}
