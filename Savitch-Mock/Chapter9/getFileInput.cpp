/*
User enters file name. Input file contains integers seperated by a space eg -12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12
Gets input from file and stores input in dynamic array. Returns array.
*/

#include <iostream>
#include <fstream>
#include <string>

int* getFileInput(int& count);

int main(){

	typedef int* integerPointer;
	integerPointer intPoint;

	int intCount;

	intPoint = getFileInput(intCount);

	std::cout<<"The integers in that file are:\n";

	for(int i=0;i<intCount;i++){
		std::cout<<intPoint[i]<<" ";
	}

	std::cout<<"\n";



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