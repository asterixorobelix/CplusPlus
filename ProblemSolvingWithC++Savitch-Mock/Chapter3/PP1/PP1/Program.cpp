/*
Chapter 3, page 204, Programming Project 1.

Write a program which computes the cost of a long-distance call. The cost is determined according to the following rate schedule:


Sample Output:
Enter the length of the call in minutes:
a
Invalid input
Exiting program..

Enter the length of the call in minutes:
23
Enter the day of the call (eg: Mo):
Mo
Please enter the starting time in the format hh:mm
12:12
The cost of the call was: 9.2
*/
#include "CallCostCalculator.h"

int main() {

	int CallTime, StartHours, StartMinutes;
	string CallDay;

	CallCostCalculator::GetInput(CallDay, CallTime, StartHours, StartMinutes);

}
