/*
Assignment 3 for CSCP1DB-17-Y1
By Nathan Stasin, Student Number: 7936-717-8
Chapter 7, Savitch, pg 471, project5

Write a program which reads in a list of integers into an array with base type int. 
Provide the facility to either read this array from the keyboard or from a file, at the user’s choice. 
If the user chooses file input, the program should request a file name. 
The file contains integers seperated by spaces; all on the same line.
You may assume that there are fewer than 50 entries in the array. Your program determines how many entries there are. 
The output is to be a two-column list. 
The first column is a list of the distinct array elements; the second column is the count of the number of occurrences of each element. 
The list should be sorted on entries in the first column, largest to smallest.
For example, for the input
-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12
the output should be

N   Count
4    2
3    3
2    2
1    4
-1   1
-12  4

Sample Output:
Enter k for keyboard entry, f for file entry:
f
You chose file entry
Enter input fileName:
IntegersList.txt
You entered: IntegersList.txt
There are 16 entries in that file
sorted entries are:
-12 -12 -12 -12 -1 1 1 1 1 2 2 3 3 3 4 4 
 N Count
 -12   4
 -1   1
 1   4
 2   2
 3   3
 4   2

*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

int maxEntries {50};

void getChoice(char& choice);

int getFileEntry(int a[]);

int getKeyboardEntry(int a []);

void calculateRepeats(int a[],int entries);

int main(){

	char userChoice ;

	getChoice(userChoice);

	int numberEntries {0};
	int userEntries [maxEntries];

	if(userChoice=='K'){
		numberEntries =getKeyboardEntry(userEntries);
	}

	else{
		numberEntries=getFileEntry(userEntries);
	}

	calculateRepeats(userEntries,numberEntries);
}

void getChoice(char& choice){
	std::cout<<"Enter k for keyboard entry, f for file entry:\n";

	std::cin>>choice;

	choice =std::toupper(choice);

	std::cout<<"You chose ";

	if(choice=='K'){
		std::cout<<"keyboard";
	}

	else if(choice=='F'){
		std::cout<<"file";
	}

	else{
		std::cout<<"invalid input\n";
		exit(1);
	}

	std::cout<<" entry\n";
}

int getFileEntry(int a[]){
	int entries {0}, currentInt;

	std::ifstream inputFile;

	std::string fileName;

	std::cout<<"Enter input fileName:\n";

	std::cin>>fileName;

	std::cout<<"You entered: "<<fileName<<std::endl;

	inputFile.open(fileName);

	if(inputFile.fail()){
		std::cout<<"input file failed to open\n";
		exit(1);
	}

	while(!inputFile.eof()){
		inputFile>>currentInt;
		a[entries]=currentInt;
		++entries;

	}

	std::cout<<"There are "<<entries<<" entries in that file\n";

	return entries;
}

int getKeyboardEntry(int a []){
	std::cout<<"You will be able to enter up to "<<maxEntries<<" integers, one at a time\n";

	int currentInt;

	int entries {0};

	std::cout<<"Enter first integer:\n";

	while(std::cin>>currentInt&&entries<maxEntries){
		std::cout<<"Enter integer:\n";
		a [entries]=currentInt;
		++entries;
	}

	std::cout<<"You entered "<<entries<<" integers\n";

	return entries;
}

void calculateRepeats(int a[],int entries){
	std::sort(a, a + entries);

	std::cout<<"sorted entries are:\n";

	for(int i =0; i<entries;i++){
		std::cout<<a[i]<<" ";
	}

	std::cout<<"\n";

	int currentTargetInt, repeatCount {0}, currentInt;
	int nonRepeats [entries], nonRepeatsCount[entries];
	
	for(int i = 0; i<entries;i++){
		currentTargetInt=a[i];
		repeatCount=0;

		for(int j=0;j<entries;j++){
			currentInt=a[j];

			if(currentInt==currentTargetInt){
				a[j]=111111;
				++repeatCount;

			}

		}

		nonRepeats[i]=currentTargetInt;
		nonRepeatsCount[i]=repeatCount;
				



	}

	std::cout<<" N Count\n";

	for(int i=0;i<entries;i++){
		if(nonRepeats[i]!=111111){
			std::cout<<" "<<nonRepeats[i]<<"   "<<nonRepeatsCount[i]<<std::endl;

		}
		

		
		
	}

}