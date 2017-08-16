#include "TempConverter.h"
#include <iostream>
#include <string>
using namespace std;

void TempConverter::GetInput() {
	double Temp;
	int scale;
	string temp;

	cout << "Enter the temperature which you wish to convert:\n";
	cin >> temp;

	try
	{
		Temp = stod(temp);
	}
	catch (const std::exception&)
	{
		cout << "invalid input\n";
		exit(1);
	}

	cout << "Enter 0 to convert to C, 1 to convert to Fahrenheit:\n";
	cin >> scale;

	double convertedTemp = ConvertTemp(Temp, scale);
	ConsolePrint(Temp, convertedTemp);
}

enum ScaleChoice
{
	C,F
};

double TempConverter::ConvertTemp(double temp, int choice) {
	const double COEFFICIENT = 1.8;
	const double END= 32;

	switch (choice)
	{
	case ScaleChoice::F:
		return COEFFICIENT*temp + END;
	case ScaleChoice::C:
		return (temp - END) / COEFFICIENT;
	default:
		cout << "Unrecognised choice\n";
		exit(1);
	}	
}

void TempConverter::ConsolePrint(double temp,double Convertedtemp) {
	cout << temp << " converted is " << Convertedtemp << endl;
}
