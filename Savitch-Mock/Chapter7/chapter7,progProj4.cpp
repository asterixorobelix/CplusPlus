/*
Chapter 7, Savitch, pg 470, project4

A class teacher asks you to help him with his course management. He currently maintains a file in which he manually records the name of each of his students and the first and second test score.

Write a program which will prompt the user to input a student's first name, last name, first test score and second test score for an entire class of students.
The scores are entered as doubles.
This information should be stored in a file called classScores.txt, an example of the ouput is below:
nathan stasin 45 56.6
donald trump 3.4 56
The program should then find go through the classScores.txt file and print to the screen the first name, second name and average score for each student.
The size of the class is different each semester.

Sample Output:
Enter firstName: 
Nathan 
Enter secondName: 
Stasin
Enter first test score: 
98.3
Enter second test score: 
78
Enter y if you would like to enter another student's details, any other key will exit
y
Enter firstName: 
Bob
Enter secondName: 
Meerkat
Enter first test score: 
45.4
Enter second test score: 
67.8
Enter y if you would like to enter another student's details, any other key will exit
y
Enter firstName: 
Jacob
Enter secondName: 
Zuma
Enter first test score: 
12
Enter second test score: 
11.5
Enter y if you would like to enter another student's details, any other key will exit
n
Exiting...

calculating averages.....

First name: Nathan 
Second Name: Stasin 
Average Score: 88.15
First name: Bob 
Second Name: Meerkat 
Average Score: 56.6
First name: Jacob 
Second Name: Zuma 
Average Score: 11.75

*/

#include <iostream>
#include <fstream>
#include <string>

void getInput(std::ofstream& scores);

void printScores(std::ifstream& scores);

int main(){
	std::ofstream classScores;

	std::ifstream scoresInput;

	getInput(classScores);
	printScores(scoresInput);

}

void getInput(std::ofstream& scores){

	char repeat {'y'};

	scores.open("classScores.txt");

	if(scores.fail()){
		std::cout<<"output file failed to open\n";
		exit(1);
	}

	std::string firstName, lastName;

	double firstScore, secondScore;

	while (repeat=='y'){

		std::cout<<"Enter firstName: \n";
		std::cin>>firstName;
		scores<<firstName;

		std::cout<<"Enter secondName: \n";
		std::cin>>lastName;
		scores<<" "<<lastName;

		std::cout<<"Enter first test score: \n";
		std::cin>>firstScore;
		scores<<" "<<firstScore;

		std::cout<<"Enter second test score: \n";
		std::cin>>secondScore;
		scores<<" "<<secondScore<<'\n';

		std::cout<<"Enter y if you would like to enter another student's details, any other key will exit\n";
		std::cin>>repeat;
	}

	std::cout<<"Exiting...\n";



	scores.close();


}

void printScores(std::ifstream& scores){

	scores.open("classScores.txt");

	if(scores.fail()){
		std::cout<<"input file failed to open\n";
		exit(1);
	}

	std::string firstName, lastName;

	double firstScore, secondScore, average;

	std::cout<<"\ncalculating averages.....\n";

	while(!scores.eof()){
		scores>>firstName>>lastName>>firstScore>>secondScore;
		average=(firstScore+secondScore)/static_cast<double>(2);

		std::cout<<"\nFirst name: "<<firstName<<"\nSecond Name: "<<lastName<<"\nAverage Score: "<<average<<std::endl;
	}

	scores.close();
}
