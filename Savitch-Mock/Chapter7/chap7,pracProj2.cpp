/*
practice program 2, pg 467, Savitch and Mock, chapter 7.

Write a program that will read in a line of text and output the number of words in the line and the number of occurrences of each letter. 
Define a word to be any string of letters that is delimited at each end by either whitespace, a period, a comma, or the beginning or end of the line. 
You can assume that the input consists entirely of letters, whitespace, commas, and periods. 
When outputting the number of letters that occur in a line, be sure to count upper- and lowercase versions of a letter as the same letter.
Output the letters in alphabetical order and list only those letters that do occur in the input line. 

For example, the input line
I say Hi.
should produce output similar to the following:
3 words
1 a
1 h
2 i
1 s
1 y

*/
#include <iostream>
#include <string>

void calculate(std::string text,int& size);

int main (){
	int size = 9;//null character

	std::string text="I say Hi";

	calculate(text, size);

	
}

void calculate(std::string text, int& size){

	std::string currentWord;

	int array [size];

	char currentLetter;

	int total {0}, letterTotal {0};

	while(text>>currentWord){
		++total;
	}

	std::cout<<"There are "<<total<<" words in the string\n";

	while(text.get(currentLetter)){
		text.get(currentLetter);
	}

}
