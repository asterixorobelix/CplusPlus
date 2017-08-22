#pragma once
#include <iostream>

using namespace std;

class JunkMail
{
public:
	JunkMail(std::string recipient);
	int GetYear();
	void WriteFile();
	void SkipTwoChars(std::ifstream& in);
	void CloseFiles(ifstream& in, ofstream& out);

private:
	string _TemplateFileName;
	string _RecipientName;
	int _Year;
	string _SenderName;
	string _OutputFileName;
};

