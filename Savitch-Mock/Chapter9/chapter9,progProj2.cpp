/*Chapter 9, Savitch, pg 564, project2
Redo programming project 3 in chapter 7, using dynamic arrays. In this version, return an array where all the repeated letters are delected.

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

Embed your function in a suitable test program. The test program asks the user to enter characters and finds repeated characters.

Sample Output:
Letters will be obtained from keyboard
How many letters do you want to enter?
4
You will be able to enter 4 letters, one at a time
Enter letter:
t
Enter letter:
t
Enter letter:
t
Enter letter:
w
You entered 4 entries, as follows:
t t t w 
repeat found
repeat found

Non repeated entries are as follows:
t w 

*/

#include <iostream>
#include <cctype>
#include <string>

char* getUserInput(int& count, int array_size);
void delete_repeats(char* a,int totalEntryNumber);

int main(){

	typedef char* integerPointer;
	integerPointer intPoint;

	int array_size;

	
	std::cout<<"Letters will be obtained from keyboard\n";
	int noOfEntries;



	std::cout<<"How many letters do you want to enter?\n";
	std::cin>>array_size;

	//intPoint = new int [array_size];
	intPoint= getUserInput(noOfEntries, array_size);


	std::cout<<"You entered "<<array_size<<" entries, as follows:\n";

	for(int i=0;i<array_size;i++){
		std::cout<<intPoint[i]<<" ";
	}

	std::cout<<"\n";	

	delete_repeats(intPoint,array_size);

	delete [] intPoint;

}

char* getUserInput(int& count, int array_size){


	std::cout<<"You will be able to enter "<<array_size<<" letters, one at a time\n";

	char currentEntry;

	typedef char* intPtr;
	intPtr intArray;

	intArray=new char[array_size];

	count=0;

	while(count<array_size){
		std::cout<<"Enter letter:\n";
		std::cin>>currentEntry;

		intArray[count]=currentEntry;
		++count;
	}


	return intArray;

}

void delete_repeats(char* a, int totalEntryNumber){

	char b[totalEntryNumber];

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
