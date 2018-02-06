/*
Chapter 6, Savitch, pg 400, project3

Write a program to compute numeric grades for a course. 
The course records are in a file (grades1.txt) that will serve as the input file. The code should allow for files with other names to be opened. 
The input file is in exactly the following format: 
Each line contains a student’s last name, then one space, then the student’s first name, then one space, 
then ten quiz scores all on one line.
The quiz scores are whole numbers and are separated by one space. 
Your program will take its input from this file and send its output to a second file, gradesResult1.txt.
The data in the output file will be the same as the data in the input file;
except that there will be one additional number (of type double ) at the end of each line. 
This number will be the average of the student’s ten quiz scores. 

Enhance the program you wrote for Programming Project 2 in all of the following ways:
	
	a. The list of quiz scores on each line will contain ten or fewer quiz scores.
	(If there are fewer than ten quiz scores, that means the student missed one or more quizzes.) 
	The average score is still the sum of the quiz scores divided by 10. This amounts to giving the student a 0 for any missed quiz.

	b. The output file will contain a line (or lines) at the beginning of the file explaining the output. 
	Use formatting instructions to make the layout neat and easy to read.

	c. After placing the desired output in an output file, your program will close all files and then copy the contents of the “output” file to the “input” file
	so that the net effect is to change the contents of the input file.

Sample Output:
Each line contains a student’s details as follows: lastName firstName testScores testAverage 
william smith 67 98 65 32 26.2
scott kollins 11 89 10
jack johnson 2 1 55 5.8
stephen alpha 67 56 7 99 21 25
robert einstein 0
*/

#include <iostream>
#include <fstream>//file streams
#include <string>

void openFile(std::ifstream& input, std::ofstream& output);

void outputToInput (std::ifstream& input, std::ofstream& output);

int main(){
	std::ifstream inputFile;
	std::ofstream outputFile;

	openFile(inputFile, outputFile);

	std::ifstream in;
	std::ofstream out;

	outputToInput (in,out);

}

void openFile(std::ifstream& input, std::ofstream& output){
	input.open("grades1.txt");
	output.open("gradesResult1.txt");

	if(input.fail()||output.fail()){
		std::cout<<"input file failed to open\n";
		exit(1);
	}

	output<<"Each line contains a student’s details as follows: lastName firstName testScores testAverage \n";

	std::string lastName, firstName;
	char currentCharacter;
	int currentGrade;

	double average, total;
	int testNumber {10};

	while (!input.eof()){
		input>>lastName>>firstName;

		std::cout<<'\n'<<lastName<<" "<<firstName<<std::endl;
		output<<lastName<<" "<<firstName<<" ";

		input.get(currentCharacter);

		while(currentCharacter!='\n'){
			input>>currentGrade;
			std::cout<<currentGrade<<" ";
			input.get(currentCharacter);
			output<<currentGrade<<" ";
			total+=currentGrade;

		}
		average=total/static_cast<double>(testNumber);

		std::cout<<" average: "<<average<<std::endl;
		output<<average<<'\n';

		std::cout<<'\n';
		total =0;

	}

	input.close();
	output.close();
}

void outputToInput (std::ifstream& input, std::ofstream& output){

	std::cout<<"copying output to input file\n";
	input.open("gradesResult1.txt");
	output.open("grades1.txt");

	char currentChar;

	while (!input.eof()){

		input.get(currentChar);
		output.put(currentChar);

	}

	input.close();
	output.close();
}