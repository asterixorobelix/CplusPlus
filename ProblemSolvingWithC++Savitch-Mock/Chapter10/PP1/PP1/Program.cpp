/*
Chapter 10, programming project 2, page 642

Write a grading program for a class with the following grading policies:
a. There are two quizzes, each graded on the basis of 10 points.
b. There is one midterm exam and one final exam, each graded on the basis of 100 points.
c. The final exam counts for 50 percent of the grade, the midterm counts for 25 percent, and the two quizzes together count for a total of 25 percent. 
(Do not forget to normalize the quiz scores. They should be converted to a percent before they are averaged in.)
Any grade >=90 is an A, any grade >= 80 is a B, any grade >= 70 is a C, any grade >= 60 is a D, and any grade below 60 is an F.
The program will read in the student’s scores and output the student’s record, which consists of two quiz and two exam scores as well as the student’s average numeric score for the entire course.
The program should also output the final letter grade. 

The student record class should have member variables for all the input data.
It should have a member variable for the student’s weighted average numeric score for the entire course.
It should also have a member variable for the student’s final letter grade. Make all member variables private. 
Include member functions for each of the following: 
member functions to set each of the member variables to values given as an argument(s) to the function, 
member functions to retrieve the data from each of the member variables, 
a void function which calculates the student’s weighted average numeric score for the entire course and sets the corresponding member variable, 
and a void function which calculates the student’s final letter grade and sets the corresponding member variable.

Sample Output:

*/
#include "Student.h"

int main() {
	Student Nathan = Student();
}