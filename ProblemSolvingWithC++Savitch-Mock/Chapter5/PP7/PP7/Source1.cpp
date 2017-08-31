#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year);
double Remainder(int numerator, int denominator);
double getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);
string ComputeDayOfWeek(int day, int month, int year);

int main() {
	cout << ComputeDayOfWeek(30,9,1986) << endl;
}

bool isLeapYear(int year) {
	if (Remainder(year, 400) == 0 || (Remainder(year, 4) == 0 && Remainder(year, 100) > 0)) {
		return true;
	}
	else {
		return false;
	}
}

double Remainder(int numerator, int denominator) {
	return (static_cast<double>(numerator) / static_cast<double>(denominator) - (numerator / denominator));
}


double getCenturyValue(int year) {
	int cent = year / 100, val;
	int remainder = year - cent * 100;

	if (year < 100) {//eg year = 197;
		val =1;
	}

	if (remainder == 0) {//eg year = 1900
		val = cent;
	}

	else if (remainder > 0) {//year = 1907
		val=cent+1;
	}
	return 2 * (3 - Remainder(val, 4));
}

int getYearValue(int year) {
	int cent = year / 100;
	int lastTwo = year - cent * 100;
	int val = lastTwo / 4;

	return val + lastTwo;
}

int getMonthValue(int month, int year) {
	bool isLeapYr = isLeapYear(year);

	switch (month) {
	case 1:
		if (!isLeapYr) {
			return 0;
			break;
		}
		else {
			return 6;
			break;
		}
	case 2:
		if (!isLeapYr) {
			return 3;
			break;
		}
		else {
			return 2;
			break;
		}
	case 3:
		return 3;
		break;
	case 4:
		return 6;
		break;
	case 5:
		return 1;
		break;
	case 6:
		return 4;
		break;
	case 7:
		return 6;
		break;
	case 8:
		return 2;
		break;
	case 9:
		return 5;
		break;
	case 10:
		return 0;
		break;
	case 11:
		return 3;
		break;
	case 12:
		return 5;
		break;
	default:
		return -1;
		break;
	}
}

string ComputeDayOfWeek(int day, int month, int year) {
	int sum = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
	int s = Remainder(sum, 7);

	switch(s) {
	case 0:
		return "Sunday";
		break;
	case 1:
		return "Monday";
		break;
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;
	case 6:
		return "Saturday";
		break;
	default:
		return "Weekday not found";
		break;
	}
}