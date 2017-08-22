#pragma once
#include <iostream>

class JunkMail
{
public:
	JunkMail(std::string recipient);
	double GetYear();
	void WriteFile();
private:
	std::string _TemplateFileName;
	std::string _RecipientName;
	std::string _Year;
	std::string _SenderName;
	std::string _OutputFileName;
};

