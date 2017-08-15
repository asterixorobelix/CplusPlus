/*
Chapter 3, page 204, Programming Project 1.

Write a program which computes the cost of a long-distance call. The cost is determined according to the following rate schedule:
	a. Any call started between 8:00 am and 6:00 pm, Monday through Friday, is billed at a rate of $0.40 per minute.
	b. Any call starting before 8:00 am or after 6:00 pm, Monday through Friday, is charged at a rate of $0.25 per minute.
	c. Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.
The input will consist of the day of the week, the time the call started, and the length of the call in minutes.
The output will be the cost of the call.
The time is to be input in 24-hour notation, so the time 1:30 pm is input as 13:30
The day of the week will be read as one of the following pairs of character values, which are stored in two variables of type char :
Mo Tu We Th Fr Sa Su
Be sure to allow the user to use either uppercase or lowercase letters or a combination of the two.
The number of minutes will be input as a value of type int .
(You can assume that the user rounds the input to a whole number of minutes.)
Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.

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
#include <iostream>

int main() {

	int CallTime, StartHours, StartMinutes;
	string CallDay;
	char choice = 't';

	while (choice != 'x' || choice != 'X') {
		CallCostCalculator::GetInput(CallDay, CallTime, StartHours, StartMinutes);

		cout << "Enter x to exit, anything else to repeat the program\n";
		cin >> choice;
	}

	cout << "Exiting..";
}
