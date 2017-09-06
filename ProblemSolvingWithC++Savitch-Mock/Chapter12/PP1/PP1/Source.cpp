/* Chapter 12, programming project 1
Following is the definition for a class called Percent:
Objects of type Percent represent percentages such as 10 % or 99 % .
All percentages are whole numbers and are stored in the int member variable named value.
Implement the default constructor and the constructor with one int parameter. 
Overload the ==, <, + and - operators.
Also, overload the * operator to allow multiplication of a percent by an integer.
Write a program to test all the member functions and overloaded operators in your class definition.
Define your aDT class in separate files so that it can be compiled separately.

*/
#include <iostream>
#include "Percent.h"

using std::cout;

int main() {
	Percent p1 = Percent(12);
	Percent p2 = Percent(13);

	bool equal = p1 == p2;

	cout<<"Are the two percents equal? "<<equal<<std::endl;


}
