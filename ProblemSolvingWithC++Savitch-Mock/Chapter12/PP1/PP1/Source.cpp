/* Chapter 12, programming project 1
Following is the definition for a class called Percent:
Objects of type Percent represent percentages such as 10 % or 99 % .
Give the definitions of the overloaded operators >> and << so that they can be used for input and output with objects of the class Percent.
Assume that input always consists of an integer followed by the character ‘%’, such as 25 % .
All percentages are whole numbers and are stored in the int member variable named value.
Implement the default constructor and the constructor with one int parameter.
Overload the + and - operators to add and subtract percents.
Also, overload the * operator to allow multiplication of a percent by an integer.
Write a program to test all the member functions and overloaded operators in your class definition.
Define your aDT class in separate files so that it can be compiled separately.

*/
#include <iostream>
using namespace std;
class Percent
{
public:
	friend bool operator ==(const Percent& first,
		const Percent& second);
	friend bool operator <(const Percent& first,
		const Percent& second);
	Percent();
	Percent(int percent_value);
	friend istream& operator >>(istream& ins,
		Percent& the_object);
	//Overloads the >> operator to input values of type
	//Percent.
	//Precondition: If ins is a file input stream, then ins
	//has already been connected to a file.
	friend ostream& operator <<(ostream& outs,
		const Percent& a_percent);
	//Overloads the << operator for output values of type
	//Percent.
	//Precondition: If outs is a file output stream, then
	//outs has already been connected to a file.
private:
	int value;
};