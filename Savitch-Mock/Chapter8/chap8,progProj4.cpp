/*Savitch, pg 476, chapt 7, progproj11
Write a program which reads a person’s name in the following format: first name, then middle name or initial, and then last name. 
The program then outputs the name in the following format:
Last_Name, First_Name Middle_Initial.
For example, the input
Mary Average User
should produce the output:
User, Mary A.
The input
Mary A. User
should also produce the output:
User, Mary A.
Your program should work the same and place a period after the middle initial even if the input did not contain a period. 
Your program should allow for users who give no middle name or middle initial. In that case, the output, of course, contains no middle name or initial. 
For example, the input
Mary User
should produce the output
User, Mary
You may want to use three string variables rather than one large string variable for the input. 

Sample Output:
Please enter your firstName:
nathan
Please enter your middleName or initial, enter 1 if you have no middle name:
r
Please enter your lastName:
stasin
you entered: 
Nathan R Stasin

Output:
Stasin, Nathan R.

*/

#include <iostream>
#include <string>

void getInput(std::string& firstName, std::string& middleName,std::string& lastName);

void giveOutput(std::string firstName,std::string middleName,std::string lastName);

int main(){

	std::string first,middle,last;

	getInput(first,middle,last);
	giveOutput(first,middle,last);

}

void getInput(std::string& firstName, std::string& middleName,std::string& lastName){
	std::cout<<"Please enter your firstName:\n";

	std::cin>>firstName;

	if(std::islower(firstName[0])){
		firstName[0]=std::toupper(firstName[0]);
	}

	if(!std::isalpha(firstName[0])){
		std::cout<<"Sorry, invalid entry for firstName\n";
		exit(1);
	}

	std::cout<<"Please enter your middleName or initial, enter 1 if you have no middle name:\n";

	std::cin>>middleName;

	if(std::islower(middleName[0])){
		middleName[0]=std::toupper(middleName[0]);
	}

	if(!std::isalpha(middleName[0])&&middleName!="1"){
		std::cout<<"Sorry, invalid entry for middleName\n";
		exit(1);
	}

	if(middleName=="1"){
		std::cout<<"You do not have a middle name\n";
		middleName=" ";
	}

	std::cout<<"Please enter your lastName:\n";

	std::cin>>lastName;

	if(std::islower(lastName[0])){
		lastName[0]=std::toupper(lastName[0]);
	}

	if(!std::isalpha(lastName[0])){
		std::cout<<"Sorry, invalid entry for lastName\n";
		exit(1);
	}

	std::cout<<"you entered: \n";
	std::cout<<firstName<<" "<<middleName<<" "<<lastName<<std::endl;
}

void giveOutput(std::string firstName,std::string middleName,std::string lastName){
	middleName=middleName[0];

	if(middleName=="1"){
		middleName="";
	}

	std::cout<<"\nOutput:\n";

	std::cout<<lastName<<", "<<firstName;

	if(middleName=="1"){
		std::cout<<".\n";
	}

	else{
		std::cout<<" "<<middleName<<".\n";
	}

}