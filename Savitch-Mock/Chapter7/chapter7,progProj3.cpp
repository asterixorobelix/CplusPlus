/*
Chapter 7, Savitch, pg 470, project3

Write a function called delete_repeats which has a partially filled array of characters as a formal parameter and which deletes all repeated letters from the array. 
Since a partially filled array requires two arguments, the function will actually have two formal parameters: an array parameter and a formal parameter of type int that gives the number of array positions used. 
When a letter is deleted, the remaining letters are moved forward to fill in the gap. 
This will create empty positions at the end of the array so that less of the array is used.
Since the formal parameter is a partially filled array, a second formal parameter of type int will tell how many array positions are filled. 
This second formal parameter will be a call-by-reference parameter and will be changed to show how much of the array is used after the repeated letters are deleted.
For example, consider the following code:
char a[10];
a[0] = 'a';
a[1] = 'b';
a[2] = 'a';
a[3] = 'c';
int size = 4;
delete_repeats(a, size);

After this code is executed, the value of a[0] is 'a' , the value of a[1] is 'b', the value of a[2] is 'c', and the value of size is 3 . 
(The value of a[3] is no longer of any concern, since the partially filled array no longer uses this indexed variable.)
You may assume that the partially filled array contains only lowercase letters. 
Embed your function in a suitable test program.

Sample Output

This program allows you to enter up to 10 lowercase letters one at a time.
The program will then remove all repeated letters and display entered letters 

Enter up to 10 lowercase letters, one at a time: 
a
a
s
s
d
f
7
You entered 6 letters, which were as follows:
a a s s d f 

deleting repeats
repeat found
repeat found

Non repeated entries are as follows:
a s d f 

*/

#include <iostream>
#include <cctype>

void fillArray(char a[],int maxSize, int& totalEntryNumber);
void delete_repeats(char a[],int maxSize, int& totalEntryNumber);

int main(){

	const int maxEntryNumber {10};
	int totalNumberOfEntries;

	char letters[maxEntryNumber];//declaring an array of chars, with size maxEntryNumber

	std::cout<<"\nThis program allows you to enter up to 10 lowercase letters one at a time.\n";
	std::cout<<"The program will then remove all repeated letters and display entered letters \n";

	fillArray(letters,maxEntryNumber, totalNumberOfEntries);

	std::cout<<"\ndeleting repeats\n";
	delete_repeats(letters,maxEntryNumber, totalNumberOfEntries);


}

void fillArray(char a[],int maxSize, int& totalEntryNumber){
	totalEntryNumber=0;
	char currentEntry;

	std::cout<<"\nEnter up to 10 lowercase letters, one at a time: \n";

	std::cin>>currentEntry;
	
	while(totalEntryNumber<=maxSize&&std::islower(currentEntry)){

		if(std::isalpha(currentEntry)){
			a[totalEntryNumber]=currentEntry;
			++totalEntryNumber;
		}

		std::cin>>currentEntry;		
	}

	std::cout<<"You entered "<<totalEntryNumber<<" letters, which were as follows:\n";

	for(int i=0;i<totalEntryNumber;i++){
		std::cout<<a[i]<<" ";
	}

	std::cout<<'\n';
}

void delete_repeats(char a[],int maxSize, int& totalEntryNumber){

	char b[maxSize];

	bool found {false};

	char currentTarget, currentChar;

	int bEntries{0};

	for(int i=0;i<totalEntryNumber;i++){
		currentTarget=a[i];
		//std::cout<<"\nCurrent Target:" <<a[i]<<std::endl;

		found=false;

		for(int j=0;j<totalEntryNumber;j++){
			currentChar=b[j];
			//std::cout<<"currentChar "<<currentChar<<std::endl;

			if(currentChar==currentTarget){
				std::cout<<"repeat found\n";
				found=true;
				break;
			}
		}

		if(found==false){
			b[bEntries]=currentTarget;
			++bEntries;
		}
	}

	std::cout<<"\nNon repeated entries are as follows:\n";

	for(int i=0;i<bEntries;i++){
		std::cout<<b[i]<<" ";
	}

	std::cout<<'\n';
}

