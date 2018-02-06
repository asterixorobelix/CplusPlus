/*pg 398, savitch and mock, practice program 1

Write a program which will search through a file, called scores.txt, containing the scores for each question in a test taken by a student. 
Find the total score for the test. The file contains nothing but numbers of type float; seperated by blanks or line breaks.

Sample output:
The total score is: 381.3
exiting..

*/
#include <iostream>
#include <fstream>

void calculate ();

int main(){

	calculate ();

	std::cout<<"exiting..\n";

}

void calculate (){
	float total {0}, number;

	std::ifstream scores;//creates a variable called scores, of type ifstream

	scores.open("scores.txt");

	while (scores>>number){
		total+=number;
	}

	std::cout<<"The total score is: "<<total<<std::endl;

	scores.close();

}