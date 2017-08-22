#include "JunkMail.h"
#include <string>
#include<ctime>
#include <fstream>
#include <cmath>

JunkMail::JunkMail(std::string recipient)
{
	_RecipientName = recipient;
	_Year = GetYear();
	_TemplateFileName = "LetterTemplate.txt";
	_SenderName = "Bob Frank";
	_OutputFileName = _RecipientName+".txt";
	WriteFile();
}

JunkMail::~JunkMail() {
	CloseStreams();
}


double JunkMail::GetYear() {
	using namespace std;
	// current date/time based on current system
	double now = time(0);
	int _year;

	cout << "Number of sec since January 1,1970:" << now << endl;
	double SecToYr = 3.1688738506811E-8;

	_year =static_cast<double>(now)*SecToYr;//convert seconds to years
	_year = _year + 1970;
	cout << "Year: " << _year << endl;
	return _year;

}

void JunkMail::WriteFile() {
	using namespace std;
	ifstream input;
	input.open(_TemplateFileName);
}

void JunkMail::CloseStreams() {

}
