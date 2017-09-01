/*
Programming Project 4, Savitch, Chapter 9, pg 565
A palindrome word reads the same both backward and forward. Write a function which takes a string as an input parameter.
The program should then test whether the string is a palindrome.
One pointer should point to the beginning of the word and another which points to the end of the word.
If the two words in these pointers is the same, then print palindrome; otherwise print non-palindrome.

Sample Output:
Hello
H
00F9FCFC
o
o
00F9FCF0
Not a palindrome

wow
w
00AAF748
w
w
00AAF73C
The word is a palindrome
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string word = "wow";

	typedef char* charPtr;

	charPtr wordStart, wordEnd;

	wordStart =&word[0];

	wordEnd = &word[word.length() - 1];

	cout << wordStart << endl;//variable pointed to by pointer
	cout << *wordStart << endl;//contents of
	cout << &wordStart << endl;//address of

	cout << wordEnd << endl;
	cout << *wordEnd << endl;
	cout << &wordEnd << endl;

	bool theSame = true;

	for (int i = 0; i < word.length(); i++) {
		wordStart = &word[i];
		wordEnd = &word[word.length() - 1-i];

		if (*wordStart != *wordEnd) {
			theSame = false;
		}
	}

	if (!theSame) {
		cout << "Not a palindrome" << endl;
	}

	else {
		cout << "The word is a palindrome" << endl;
	}
}