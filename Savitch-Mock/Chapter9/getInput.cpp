/*
Gets input from user and stores input in dynamic array. Returns array.
*/

#include <iostream>

int* getUserInput(int& count, int array_size);

int main(){
	int noOfEntries;

	typedef int* integerPointer;
	integerPointer intPoint;

	int array_size;

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
