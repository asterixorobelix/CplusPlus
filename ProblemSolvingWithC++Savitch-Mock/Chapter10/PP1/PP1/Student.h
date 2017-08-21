#pragma once
class Student
{
public:
	Student();
	Student(double q1, double q2, double midterm, double final);
	void GetQuizPercent();
private:
	double _quiz1;
	double _quiz2;
	double CalculateQuizPercent();
	double _quizPercent;
	double _midtermExam;
	double _finalExam;
	double _averageScore;
	char _finalGrade;
};

