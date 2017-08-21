#include "Student.h"

//initializes student grades to zero
Student::Student():_quiz1(0),_quiz2(0),_midtermExam(0),_finalExam(0),_averageScore(0),_finalGrade(0)
{
}

Student::Student(double q1, double q2, double midterm, double final) {
	_quiz1 = q1;
	_quiz2 = q2;
	_midtermExam = midterm;
	_finalExam = final;
	GetQuizPercent();
}

double Student::CalculateQuizPercent() 
{
	return (_quiz1 + _quiz2)*(5 / 20);
}

void Student::GetQuizPercent() {
	_quizPercent = CalculateQuizPercent();
}
