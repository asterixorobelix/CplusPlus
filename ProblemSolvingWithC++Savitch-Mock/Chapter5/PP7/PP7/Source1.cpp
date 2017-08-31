#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year);
double getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);
string ComputeDayOfWeek(int day, int month, int year);

int main() {
	cout << ComputeDayOfWeek(4,7,2008) << endl;
}

bool isLeapYear(int year) {
	if (year%400 == 0 || (year%4 == 0 && year%100 > 0)) {
		return true;
	}
	else {
		return false;
	}
}

double getCenturyValue(int year) {
	int val = year / 100;
	return 2 * (3 - val % 4);
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
	int s1 = getMonthValue(month, year), s2= getYearValue(year), s3 = getCenturyValue(year);
	int sum = day +s1  +s2  +s3 ;
	int s = sum%7;

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