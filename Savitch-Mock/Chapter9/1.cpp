/*Chapter 9 of Savitch, pg 565, programming project 4

Sample Output:
Enter a word to test for palindrome:
Hello
You entered: Hello
forwardChar: Hello
*forwardChar: H
&forwardChar: 0xbffcae24

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
	//declare a pointer variable, called forwardChar, which points to a variable of type char
	char *forwardChar, *backwardChar; //can't have char* forwardChar, backwardChar; This is because * only applies to forwardChar, when you want it to apply to both forwardChar and BackwardChar.
	//if you do what is described in the comments, you will get the following error: invalid conversion from ‘char*’ to ‘char’ 

	int wordSize=word.length();

	//You entered: Hello

	char firstLetter=word[0];

	std::cout<<"firstLetter: "<<firstLetter<<std::endl;	//word[0]=H

	//determine the address of firstLetter and assign it to backwardChar;
	backwardChar=&firstLetter; 

	std::cout<<"&firstLetter: "<<&firstLetter<<std::endl;//&firstLetter: HD�� //do I need to static_cast here?

	std::cout<<"backwardChar: "<<backwardChar<<std::endl;//backwardChar: HD��

/*You can't return the variable which firstLetter points to
	std::cout<<"*firstLetter: "<<*firstLetter<<std::endl;
*/
	//Determine the address of word[0] and assign that address to forwardChar;
	forwardChar=&word[0];

	std::cout<<"forwardChar: "<<forwardChar<<std::endl;//forwardChar: Hello

	//produce the variable which forwardChar points to, which is word[0] = H
	std::cout<<"*forwardChar: "<<*forwardChar<<std::endl;//*forwardChar: H

	/*Why doesnt this work? //Because you can't return the variable which firstLetter points to
	std::cout<<"*firstLetter: "<<*firstLetter<<std::endl;// error: invalid type argument of unary ‘*’ (have ‘char’)
	*/

	//produce the address of the pointer forwarchChar
	std::cout<<"&forwardChar: "<<&forwardChar<<std::endl;//&forwardChar: 0xbffcae24 

	//produce the address of word[0] (address of word[0]=forwardChar)
	std::cout<<"&word[0]: "<<&word[0]<<std::endl;//&word[0]: Hello

}