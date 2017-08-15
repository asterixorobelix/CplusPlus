#include "CallCostCalculator.h"
#include <iostream>
#include <string>

using namespace std;

void GetTimeInput(int& Hours, int& Minutes) {
	cout << "Please enter the starting time in the format hh:mm" << endl;

	string input;
	cin >> input;

	try
	{
		int InputLength = input.length();
		int SeperatorLocation = input.find(':');

		Hours = stoi(input.substr(0, SeperatorLocation));//stoi = string to integer. substr(StartPosition, CharacterNumber)
		Minutes = stoi(input.substr(SeperatorLocation + 1, InputLength));
		
		//cout << "Start time - " << Hours << ":" << Minutes << endl;
	}
	catch (const std::exception&)
	{
		CallCostCalculator::PrintError();
	}	
}

void CallCostCalculator::GetInput(string& Day, int& CallLength, int& Hours, int& Minutes) {
	string length;
	cout << "Enter the length of the call in minutes:\n";
	cin >> length;
	
	try
	{
		CallLength = stoi(length);
	}
	catch (const std::exception&)
	{
		CallCostCalculator::PrintError();
	}

	cout << "Enter the day of the call (eg: Mo):\n";
	cin >> Day;
	
	GetTimeInput(Hours, Minutes);
	CalculateCallCost(Day, CallLength, Hours, Minutes);
}

void CallCostCalculator::CalculateCallCost(string Day, int CallLength, int Hours, int Minutes) {

	const int PEAKSTARTHOUR = 8;
	const int PEAKENDHOUR = 18;

	const double PEAKRATE = 0.40;
	const double OFFPEAKRATE = 0.25;
	const double WEEKENDRATE = 0.25;

	double CallCost;

	if (Day == "SU" || Day == "Su" || Day == "SA" || Day == "Sa") {
		CallCost = CalculateCost(WEEKENDRATE,CallLength);
	}

	else if (Hours > PEAKSTARTHOUR || Hours < PEAKENDHOUR) {
		CallCost = CalculateCost(PEAKRATE, CallLength);
	}

	else {
		CallCost = CalculateCost(OFFPEAKRATE, CallLength);
	}
	cout << "The cost of the call was: " << CallCost << endl;
}

double CallCostCalculator::CalculateCost(double _Rate, int CallLength) {
	double Cost= _Rate*static_cast<double>(CallLength);
	return Cost;
}

void CallCostCalculator::PrintError() {
	cout << "Invalid input" << endl;
	cout << "Exiting program..\n";
	exit(1);
}

