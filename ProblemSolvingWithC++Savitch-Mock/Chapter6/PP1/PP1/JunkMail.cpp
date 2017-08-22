#include "JunkMail.h"
#include <string>
#include<ctime>
#include <fstream>
#include <cmath>
#include <direct.h>

JunkMail::JunkMail(std::string recipient)
{
	_RecipientName = recipient;
	_Year = GetYear();
	_TemplateFileName = "LetterTemplate.txt";
	_SenderName = "Bob Frank";
	_OutputFileName = _RecipientName+".txt";
	WriteFile();
}


int JunkMail::GetYear() {
	using namespace std;
	// current date/time based on current system
	double now = time(0);
	int _year;

	//cout << "number of sec since january 1,1970:" << now << endl;
	double SecToYr = 3.1688738506811E-8;

	_year =static_cast<double>(now)*SecToYr;//convert seconds to years
	_year = _year + 1970;
	cout << "Current Year: " << _year << endl;
	return _year;

}                                                                                  

void JunkMail::WriteFile() {
	std::string cwd = _getcwd(NULL, 0);
	//std::cout << "Current working directory:\n";
	//std::cout << cwd << std::endl;

	std::string fullfilename = cwd +"\\"+ _TemplateFileName;

	ifstream input;
	input.open(fullfilename);

	std::string currentWord;

	if (input.fail()) {
		std::cout << "Failed to open input file\n";
	}
	
	ofstream output;
	output.open(_OutputFileName);

	if (output.fail()) {
		std::cout << "Failed to open output file\n";
	}

	char currentChar;
	int count = 1;

	while (!input.eof()) {
		
		input.get(currentChar);
		if (currentChar != '#') {
			output.put(currentChar);
		}
		else {
			std::cout << count << std::endl;
			if (count == 1) {
				std::cout << "Writing recipient name\n";
				output << _RecipientName;
				SkipTwoChars(input);
				count++;
				continue;
			}

			if (count == 2) {
				std::cout << "Writing year\n";
				output << _Year;
				SkipTwoChars(input);
				count++;
				continue;
			}
			if (count == 3) {
				std::cout << "Writing sender name\n";
				output << _SenderName;
				SkipTwoChars(input);
				count++;
				continue;
			}
			
		}
	}

	std::cout << "Closing files\n";
	input.close();
	output.close();
}

void JunkMail::SkipTwoChars(std::ifstream& in) {
	char c;
	in.get(c);
	in.get(c);
}

