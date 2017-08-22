/*
Write a program to generate personalized junk mail. 
The program takes input from both an input file and from the keyboard. 
The input file contains the text of a letter, except that the name of the recipient is indicated by the three characters #N#. 
The program asks the user for a name and then writes the letter to a second file but with the three letters #N# replaced by the name. 
The three-letter string #N# will occur exactly once in the letter.
(Hint: have your program read from the input file until it encounters the three characters #N#, and have it copy what it reads to the
output file as it goes. When it encounters the three letters #N#, it then sends output to the screen asking for the name from the keyboard.
You should be able to figure out the rest of the details. 
Your program should define a function which is called with the input- and output-file streams as arguments. 

More difficult version : Allow the string #N# to occur any number of times in the file.
In this case, the name is stored in two string variables. 
For this version, assume that there is a first name and last name but no middle names or initials.
*/
#include "JunkMail.h"

int main() {
	JunkMail jm1 = JunkMail("Nathan Stasin");
}