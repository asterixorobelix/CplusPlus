#pragma once
#include <string>
using namespace std;

class SvgFile
{
public:
	SvgFile(std::string file);
	void CreateSVG();
private:
	std::array<int, 4> GetInput();
	string _FileExtension;
	string _FileName;
	string GetHeader();
	string GetFooter();
	int VerifyInput(int num);
	std::string GetRectangle(int coord);
};

