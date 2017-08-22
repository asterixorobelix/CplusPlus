#pragma once
#include <iostream>

class JunkMail
{
public:
	JunkMail(std::string recipient);
	~JunkMail();
	double GetYear();
	void WriteFile();
	void CloseStreams();
private:
	std::string _TemplateFileName;
	std::string _RecipientName;
	std::string _Year;
	std::string _SenderName;
	std::string _OutputFileName;
};

