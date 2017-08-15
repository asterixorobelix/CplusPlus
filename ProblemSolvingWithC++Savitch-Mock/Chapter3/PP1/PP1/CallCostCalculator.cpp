#include "CallCostCalculator.h"
#include <iostream>
#include <string>
using namespace std;


void CallCostCalculator::GetTimeInput(int& Hours, int& Minutes) {
	cout << "Please enter the starting time in the format hh:mm" << endl;

	string input;
	cin >> input;

	try
	{
		int InputLength = input.length();
		int SeperatorLocation = input.find(':');

		Hours = stoi(input.substr(0, SeperatorLocation));//stoi = string to integer. substr(StartPosition, CharacterNumber)
		Minutes = stoi(input.substr(SeperatorLocation + 1, InputLength));
		
		cout << "Start time - " << Hours << ":" << Minutes << endl;
	}
	catch (const std::exception&)
	{
		cout << "Input in the incorrect format";
	}
	
}