/*Savitch, Chapter 10, programming project 1, page 642

Write a grading program for a class with the following grading policies:
	 a.	 There are two quizzes, each graded out of 10 points.
	 b.	 There is one midterm exam and one final exam, each graded on the basis of 100 points.
	 c.	 The final exam counts for 50% of the grade, the midterm 25%, and the two quizzes together count for 25%.
(Do not forget to normalize the quiz scores. They should be converted to a percent before they are averaged in.)

Any grade of 90 or more is an A, any grade of 80 or more (but less than 90) is a B, any grade of 70 or more (but less than 80) is a C, any grade of 60 or more (but less than 70) is a D, and any grade below 60 is an F.

The program will read in the student’s scores from a file called studentGrades.txt, each line of which is as follows:
firstName lastName quiz1 quiz2 midtermExam finalExam
The program should output for each student: The students name: the student's quiz and exam scores as well as the student’s average numeric score for the entire course and the final letter grade. 

Define and use a structure for the student record. 

Sample Output:
Opening studentGrades.txt
Nathan Stasin quiz1: 10 quiz2: 9.2 midterm: 87 final: 93 average: 92.25 finalGrade: A
Muhammad Stracey quiz1: 3.4 quiz2: 7.6 midterm: 98 final: 65 average: 70.75 finalGrade: C
Clayton Coetzee quiz1: 5.4 quiz2: 7.7 midterm: 29 final: 88 average: 67.625 finalGrade: F

*/
#include <iostream>
#include <fstream>
#include <string>

struct StudentScores{
	std::string firstName;
	std::string lastName;
	float quiz1;
	float quiz2;
	float midtermExam;
	float finalExam;
};

void readInput();

int main(){
	readInput();
}

void readInput(){
	std::ifstream grades;
	std::cout<<"Opening studentGrades.txt\n";
	grades.open("studentGrades.txt");

	if(grades.fail()){
		std::cout<<"COuldn't open grades file\n";
		exit(1);
	}

	StudentScores currentStudent;
	float averageScore;

	float quizzes{0.25}, midterm {0.25}, final {0.5};

	while(!grades.eof()){
		grades>>currentStudent.firstName;
		grades>>currentStudent.lastName;
		grades>>currentStudent.quiz1;
		grades>>currentStudent.quiz2;
		grades>>currentStudent.midtermExam;
		grades>>currentStudent.finalExam;

		std::cout<<currentStudent.firstName<<" ";
		std::cout<<currentStudent.lastName<<" ";
		std::cout<<"quiz1: "<<currentStudent.quiz1<<" ";
		std::cout<<"quiz2: "<<currentStudent.quiz2<<" ";
		std::cout<<"midterm: "<<currentStudent.midtermExam<<" ";
		std::cout<<"final: "<<currentStudent.finalExam<<" average: ";

		averageScore = quizzes*(((currentStudent.quiz1+currentStudent.quiz2)/static_cast<float>(20))*static_cast<float>(100))+midterm*currentStudent.midtermExam+final*currentStudent.finalExam;
		std::cout<<averageScore<<" finalGrade: ";


		if(averageScore>=90){
			std::cout<<"A\n";
		}

		else if(averageScore>=80){
			std::cout<<"B\n";
		}

		else if(averageScore>=70){
			std::cout<<"C\n";
		}

		else{
			std::cout<<"F\n";
		}

	}

	grades.close();
}