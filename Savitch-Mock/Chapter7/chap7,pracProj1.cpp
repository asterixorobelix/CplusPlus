/*
practice program 1, pg 467, Savitch and Mock, chapter 7.

Write a program which takes user input and puts the integers into an array.
Write a function named firstLast2 which should return true if the array starts or ends with the digit 2. Otherwise it should return false. 
Test your function with arrays of different length and with the digit 2 different locations in the array.

Sample output:
Enter up to 50 integers, one at a time: 1
Enter integer: 2
Enter integer: 3
Enter integer: 4
Enter integer: 5
Enter integer: 66
Enter integer: 7
Enter integer: 4
Enter integer: 2
Enter integer: t
You entered:
1 2 3 4 5 66 7 4 2 
That array of integers begins or ends with a 2


*/
#include <iostream>

void getInput(int numbers[], int& currentIndex);

bool firstLast2(int numbers[], int currentIndex);

int main(){
	int maxNumbers {50}, entryNumber {0};
	int integersArray[maxNumbers];

	getInput(integersArray, entryNumber);

	if(firstLast2(integersArray, entryNumber)){
		std::cout<<"That array of integers does not begin or end with a 2\n";
	}

	else{
		std::cout<<"That array of integers begins or ends with a 2\n";
	}	
}

void getInput(int array[], int& currentIndex){

	int currentInteger;

	std::cout<<"Enter up to 50 integers, one at a time: ";

	while(std::cin>>currentInteger&&currentIndex<50){
		array[currentIndex]=currentInteger;
		++currentIndex;
		std::cout<<"Enter integer: ";
	}

	std::cout<<"You entered:\n";

	for(int i=0;i<currentIndex;i++){
		std::cout<<array[i]<<" ";
	}

	std::cout<<"\n";
}

bool firstLast2(int numbers[], int currentIndex){

	if(numbers[0]==2||numbers[currentIndex-1]==2){
		
		return false;
	}

	else{
		
		return true;
	}
}