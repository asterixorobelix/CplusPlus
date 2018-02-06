/*
Chapter 6, Savitch, pg 400, project3

Write a program which allows the user to type in any one-line question and then answers that question. 
The program will not really pay any attention to the question, but will simply read the question line and discard all that it reads. 
It always gives one of the 8 answers stored (one answer per line) in a file, answers.txt.
Your program simply reads the next answer from the file and writes it out as the answer to the question. 
After your program has read the entire file, it simply closes the file, reopens the file, and starts down the list of answers again.
Whenever your program outputs the first answer, it should replace the two symbols #N with a number between 1 and 18 (including the
possibility of 1 and 18). 
In order to choose a number between 1 and 18, your program should initialize a variable to 18 and decrease the variable’s
value by 1 each time it outputs a number so that the chapter numbers count backward from 18 to 1. 

When the variable reaches the value 0, your program should change its value back to 18. 
Give the number 18 the name NUMBER_OF_CHAPTERS with a global named constant declaration using the const modifier.

Sample ouput

Enter your question: 
y
I'm not sure, but I think you will find the answer in Chapter 18.
Enter y to repeat, n to exit
y
Enter your question: 
d
That's a good question.
......
Enter y to repeat, n to exit
y
Enter your question: 
d
Enter your question: 
d
I'm not sure, but I think you will find the answer in Chapter 17.
Enter y to repeat, n to exit
n

exiting...
*/
#include <iostream>
#include <fstream>
#include <string>

void getAnswer(std::ifstream& answers, int chapter);

int main(){

	std::ifstream answersFile;
	constexpr int NUMBER_OF_CHAPTERS {18};
	int currentChapter;

	currentChapter=NUMBER_OF_CHAPTERS;

	while(true){

		getAnswer(answersFile, currentChapter);
		answersFile.close();

		--currentChapter;

		if(currentChapter<=0){
			currentChapter=NUMBER_OF_CHAPTERS;
		}
	}
}

void getAnswer(std::ifstream& answers, int chapter){
	std::string currentAnswer, question;
	answers.open("answers.txt");

	char repeat {'y'}, currentChar;

	int  currentAnswerIndex {0};

	std::cout<<"Enter your question: \n";
	std::cin>>question;

	if(currentAnswerIndex==0){
		answers.get(currentChar);

		while(true){

			if (currentChar!='#'){
				std::cout<<currentChar;
				answers.get(currentChar);
			}
			
			else {
				std::cout<<chapter;
				answers.get(currentChar);
				break;
			}			
		}
	}

	while(!answers.eof()){

		std::getline(answers,currentAnswer);
		std::cout<<currentAnswer;

		std::cout<<"\nEnter y to repeat, n to exit\n";
		std::cin>>repeat;

		if(repeat!='y'){
			std::cout<<"\nexiting...\n";
			exit(0);
		}

		std::cout<<"Enter your question: \n";
		std::cin>>question;

		++currentAnswerIndex;
	}
}
