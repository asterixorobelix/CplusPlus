/*
You are given a class Person with a single field named age (>=0). We would like to be able to compare different persons according to their age.
Your task is to implement the following comparison operators:
'=='
'!='
'<='
'>='
'<'
'>'
Try to re-use implementation as much as possible, for example: '<' operator can be implemented using '<=' and '!='.
*/
#include "Person.h"
#include <iostream>

using std::cout;

int main() {
	Person a1 = Person(23);
	Person a2 = Person(17);
	
	cout << "The age of the two people are equal: " << (a1 == a2) << std::endl;

	cout << "The age of a1 is less than the age of a2: " << (a1 < a2) << std::endl;
}
