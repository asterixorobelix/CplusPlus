#pragma once
#include <string>
using namespace std;

class SvgFile
{
public:
	SvgFile();
	std::array<int, 4> GetInput();
private:
	string _FileExtension;
	string _FileName;
	string GetHeader();
	string GetFooter();
	int VerifyInput(int num);
	std::string GetRectangle(int coord);
};

