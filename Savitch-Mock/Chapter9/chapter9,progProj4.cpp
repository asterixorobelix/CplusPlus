/*
Programming Project 4, Savitch, Chapter 9, pg 565

A palindrome word reads the same both backward and forward. Write a function which takes a string as an input parameter.
The program should then test whether the string is a palindrome.
One pointer should point to the beginning of the word and another which points to the end of the word.
If the two words in these pointers is the same, then print palindrome; otherwise print non-palindrome.

Sample Output:

Enter a word to test for palindrome:
Hello
You entered: Hello
non-palindrome
nathan@NathanStasinAcer:~/Desktop/practiceCode$ ./1
Enter a word to test for palindrome:
wow
You entered: wow
palindrome
nathan@NathanStasinAcer:~/Desktop/practiceCode$ ./1
Enter a word to test for palindrome:
civic
You entered: civic
palindrome
nathan@NathanStasinAcer:~/Desktop/practiceCode$ ./1
Enter a word to test for palindrome:
madam
You entered: madam
palindrome
nathan@NathanStasinAcer:~/Desktop/practiceCode$ ./1
Enter a word to test for palindrome:
nathan
You entered: nathan
palindrome
*/
#include <iostream>
#include <string>

void getUserInput(std::string& word);

void palindromeTest(std::string word);

int main(){

	std::string userWord;

	getUserInput(userWord);

	palindromeTest(userWord);
	
}


void getUserInput(std::string& word){

	std::cout<<"Enter a word to test for palindrome:\n";

	std::cin>>word;

	std::cout<<"You entered: "<<word<<std::endl;

}

void palindromeTest(std::string word){

	char *forwardChar, *backwardChar;

	int wordSize=word.length();

	bool theSame {false};

	for(int i=0;i<wordSize;i++){
		forwardChar=&word[i];
		backwardChar=&word[wordSize-1-i];

		if(*forwardChar==*backwardChar){
			theSame=true;
		}

		else{
			theSame=false;
		}
	}

	std::cout<<"\n";

	if(theSame){
		std::cout<<word<<" is a palindrome\n";
	}

	else{
		std::cout<<word<<" is not a palindrome\n";
	}

}