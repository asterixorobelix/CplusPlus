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

private:
	string _TemplateFileName;
	string _RecipientName;
	int _Year;
	string _SenderName;
	string _OutputFileName;
};

