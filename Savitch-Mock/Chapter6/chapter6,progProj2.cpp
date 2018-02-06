/*
Chapter 6, Savitch, pg 400, project2

Write a program to compute numeric grades for a course. 
The course records are in a file (grades.txt) that will serve as the input file. The code should allow for files with other names to be opened. 
The input file is in exactly the following format: 
Each line contains a student’s last name, then one space, then the student’s first name, then one space, 
then ten quiz scores all on one line.
The quiz scores are whole numbers and are separated by one space. 
Your program will take its input from this file and send its output to a second file, gradesResult.txt.
The data in the output file will be the same as the data in the input file;
except that there will be one additional number (of type double ) at the end of each line. 
This number will be the average of the student’s ten quiz scores. 

Sample Output:

william smith, average: 90.8
scott kollins, average: 82.4
jack johnson, average: 85.7
stephen alpha, average: 73.8
robert einstein, average: 79.1

*/

#include <iostream>
#include <fstream>//file streams
#include <string>

void result(std::ifstream& fin, std::ofstream& fout);

int main(){
std::ifstream gradesData;
	gradesData.open("grades.txt");

	if(gradesData.fail()){
		std::cout<<"Failed to open file"<<std::endl;
		exit(1);
	}

	std::ofstream gradesResults;
	gradesResults.open("gradesResults.txt");

	result(gradesData,gradesResults);

	gradesData.close();
	gradesResults.close();
}

void result(std::ifstream& fin, std::ofstream& fout){
	std::string firstName, lastName;
	double average;
	int currentGrade, total {0};
	const int numberOfTests {10};

	while (!fin.eof()){
		fin>>lastName>>firstName;
		fout<<lastName<<" "<<firstName<<" ";

		for (int i=0;i<numberOfTests;i++){
			fin>>currentGrade;
			fout<<currentGrade;
			total+=currentGrade;
		}

		average=static_cast<float>(total)/numberOfTests;
		fout<<average<<'\n';
		total=0;

		std::cout<<lastName<<" "<<firstName<<" "<<average<<std::endl;
	}
}
