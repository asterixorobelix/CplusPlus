/*
chapter5, page 331, programming projects 7
Write a program which inputs a date (for example, July 4, 2008) and outputs the day of the week which corresponds to that date.
The implementation will require several functions.
isLeapYear(int year); This function should return true if year is a leap year and false if it is not.
Here is pseudocode to determine a leap year:
year = (year divisible by 400) or (year divisible by 4 and year not divisible by 100))
eg: 2016 should output true

getCenturyValue(int year); This function should take the first two digits of the year (that is, the cen-tury), divide by 4, and save the remainder. 
Subtract the remainder from 3 and return this value multiplied by 2.
For example, the year 2008 becomes: (21/4) = 5 with a remainder of 0.25. 3 - 0.25 = 2.75. Return 2.75 * 2 = 5.5.

int getYearValue(int year); This function computes a value based on the years since the beginning of the century. 
First, extract the last two digits of the year. For example, 08 is extracted for 2008. Next, factor in leap years.
Divide the value from the previous step by 4 and discard the remainder. Add the two results together and return this value.
For example, from 2008 we extract 08. Then (8/4) = 2 with a remainder of 0. Return 2 + 8 = 10.

int getMonthValue(int month, int year); This function should return a value based on the table below and will require invoking the isLeapYear function.
Month ReturnValue
1 - January 0 (6 if year is a leap year)
2 - February 3 (2 if year is a leap year)
3 - March 3
4 - April 6
5 - May 1
6 - June 4
7 - July 6
8 - August 2
9 - September 5
10 - October 0
11 - November 3
12 - December 5

Finally, to compute the day of the week, compute the sum of the date's day plus the values returned by getMonthValue, getYearValue, and getCenturyValue.
Divide the sum by 7 and compute the remainder. A remainder of 0 corresponds to Sunday, 1 corresponds to Monday, etc.,	up to 6, which corresponds to Saturday.
For example, the date July 4, 2008 should be computed as (day of month) + (getMonthValue) + (getYearValue) + (getCenturyValue) = 4 + 6 + 10 + 6 = 26.
26/7 = 3 with a remainder of 5. The fifth day of the week corresponds to Friday.

Eg: 30 September 1986 is a Tuesday

Your program should allow the user to enter any date and output the corresponding day of the week in English.
This program should include a void function named getInput that prompts the user for the date and returns the month, day, and year using pass-by-reference parameters.
You may choose to have the user enter the date's month as either a number (1-12) or a month name.
Sample output
Calculate day of the week from date
for example: 30/9/1986
Enter the day:
30
Enter 1 to 12 for month, from January to December:
9
Enter year:
1986
30/9/1986
That was not a leap year
The day of the week for that date is Tuesday
Would you like to repeat the program (y/n)?
t
exiting..
*/