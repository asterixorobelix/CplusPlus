/*
Do Programming Project 5 in Chapter 7 using a dynamic array. In this version of the problem, use dynamic arrays to store the digits in each large integer. Allow an arbitrary number of digits instead of capping the number of digits at 49.
From Programming project 5:
Write a program which reads in a list of integers into an array with base type int. 
Provide the facility to either read this array from the keyboard or from a file, at the user’s choice. 
If the user chooses file input, the program should request a file name. For example, IntegersList.txt
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
enter k for keyboard input, f for file input:
f
You chose file input
Integers obtained from file
Enter input fileName: 
IntegersList.txt
You entered: IntegersList.txt
There are 16 integers in that file
The integers in that file are:
-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12 
A list of the integers entered: 
-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12 

   N  Count
  -12   4
  3   3
  4   2
  1   4
  -1   1
  2   2

nathan@NathanStasinAcer:~/Desktop/c++/Unisa/Savitch&Mock/Chapter9$ ./proj1 
You chose keyboard input
Integers obtained from keyboard
How many integers do you want to enter?
5
You will be able to enter 5 integers, one at a time
Enter integer:
34
Enter integer:
5
Enter integer:
22
Enter integer:
22
Enter integer:
67
You entered 5 entries, as follows:
34 5 22 22 67 
A list of the integers entered: 
5 22 22 34 67 

   N  Count
  5   1
  22   2
  34   1
  67   1
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>


void getChoice(char& choice);
int* getUserInput(int& count, int array_size);
int* getFileInput(int& count);
void calculateElements(int* array,int entries);

int main(){


	char userChoice;

	getChoice(userChoice);

	typedef int* integerPointer;
	integerPointer intPoint;

	int array_size;

	if(userChoice=='K'){
		std::cout<<"Integers obtained from keyboard\n";
		int noOfEntries;



		std::cout<<"How many integers do you want to enter?\n";
		std::cin>>array_size;

		//intPoint = new int [array_size];
		intPoint= getUserInput(noOfEntries, array_size);


		std::cout<<"You entered "<<array_size<<" entries, as follows:\n";

		for(int i=0;i<array_size;i++){
			std::cout<<intPoint[i]<<" ";
		}

		std::cout<<"\n";


	}

	else{
		std::cout<<"Integers obtained from file\n";


		intPoint = getFileInput(array_size);

		std::cout<<"The integers in that file are:\n";

		for(int i=0;i<array_size;i++){
			std::cout<<intPoint[i]<<" ";
		}

		std::cout<<"\n";

	}

	calculateElements(intPoint, array_size);

	delete [] intPoint;


}

void getChoice(char& choice){
	std::cout<<"enter k for keyboard input, f for file input:\n";

	std::cin>>choice;

	choice=std::toupper(choice);

	if(choice=='K'){
		std::cout<<"You chose keyboard input\n";
	}

	else if(choice=='F'){
		std::cout<<"You chose file input\n";
	}

	else{
		std::cout<<"Sorry, I dont recognize your input\n";
	}
}

int* getUserInput(int& count, int array_size){


	std::cout<<"You will be able to enter "<<array_size<<" integers, one at a time\n";

	int currentEntry;

	typedef int* intPtr;
	intPtr intArray;

	intArray=new int[array_size];

	count=0;

	while(count<array_size){
		std::cout<<"Enter integer:\n";
		std::cin>>currentEntry;

		intArray[count]=currentEntry;
		++count;
	}


	return intArray;

}

int* getFileInput(int& count){

	std::cout<<"Enter input fileName: \n";

	std::string fileName;

	std::cin>>fileName;

	std::cout<<"You entered: "<<fileName<<std::endl;

	std::ifstream inputFile;

	inputFile.open(fileName);

	if(inputFile.fail()){
		std::cout<<"Input file failed to open\n";
		exit(1);
	}

	int currentInt;

	count ={0};

	while (!inputFile.eof()){
		inputFile>>currentInt;
		++count;

	}

	inputFile.close();

	std::cout<<"There are "<<count<<" integers in that file\n";

	typedef int* integerPointer;
	integerPointer intArray;

	intArray = new int[count];


	inputFile.open(fileName);

	int i{0};

	while(!inputFile.eof()){
		inputFile>>currentInt;
		intArray[i]=currentInt;
		++i;
	}

	return intArray;

}


void calculateElements(int* array,int entries){
	std::sort(array, array + entries);

	std::cout<<"A list of the integers entered: \n";

	for (int i=0;i<entries;i++){
		std::cout<<array[i]<<" ";
	}
	std::cout<<"\n";

	int currentNumber, currentTarget, count, intermediateArray[entries], repeatsCount[entries];

	for(int i=0;i<entries;i++){
		count=0;
		currentTarget=array[i];

		//std::cout<<"currentTarget: "<<currentTarget<<std::endl;

		for (int j=0;j<entries;j++){
			currentNumber=array[j];
			
			if(currentTarget==currentNumber){
				array[j]=-17803;
				++count;
			}
		
		
		}
		intermediateArray[i]=currentTarget;
		repeatsCount[i]=count;


	}

	std::cout<<"\n   N  Count\n";

	for(int i=0;i<entries;i++){
		if(intermediateArray[i]!=-17803){
			std::cout<<"  "<<intermediateArray[i]<<"   "<<repeatsCount[i]<<std::endl;

		}
	}

	std::cout<<"\n";


}

