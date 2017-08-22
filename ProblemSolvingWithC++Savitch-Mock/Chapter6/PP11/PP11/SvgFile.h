#pragma once
#include <string>
using namespace std;

class SvgFile
{
public:
	SvgFile();
	int* GetInput();
private:
	string _FileExtension;
	string _FileName;
	string GetHeader();
	string GetFooter();
	int VerifyInput(int num);
};

