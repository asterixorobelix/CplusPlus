/*
Chapter 6, Savitch, pg 400, project8

Write a program which determines popularity of a given boy or girl name in the United States for the year 2015, as compiled by the Social Security Administration.
The text file yob2015NoCommas.txt, contains a list of entries in the format name,sex,number. Where M is male and F is female and number is the number of occurences of the name.
eg:
Emma F 20355
This indicates that Emma, for females is ranked 20355 in popularity.

Write a program which allows the user to input a name. Allow for poor user input.
The program should then read from the file and search for a matching name among the girls and boys. Allow for a failure to open file containing name data.
If a match is found, it should output the rank of the name.
The program should also indicate if there is no match.

If the user enters the name “Walter,” then the program should output:
Walter is ranked 376 in popularity among boys.
Walter is not ranked among the girl names.

Sample output:
Enter a name: 
Nathan
You entered: Nathan
Nathan is ranked 8 among girls
Nathan is ranked 8530 among boys
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>//islower()
#include <cstdlib>//exit()

void getInput(std::string& n);
void search(std::string name);

int main(){
	std::string name;
	getInput(name);
	search(name);
	
}

void getInput(std::string& n){
	std::cout<<"Enter a name, with capital first letter:\n";
	std::cin>>n;

	if(islower(n[0])){//convert first letter to capital if user gives lowercase
		n[0]=toupper(n[0]);
	}

	std::cout<<"You entered: "<<n<<std::endl;

}

void search(std::string name){

	std::ifstream namesData;
	namesData.open("yob2015NoCommas.txt");

	if(namesData.fail()){
		std::cout<<"Failed to open names data file"<<std::endl;
		exit(1);//exits program
	}

	std::string currentName;
	char sex;
	int rank {0};

	while(!namesData.eof()){
		namesData>>currentName;

		if(currentName==name){
			namesData>>sex>>rank;
			std::cout<<name<<" is ranked "<<rank;

			if(sex=='F'){
				std::cout<<" among girls"<<std::endl;
			}

			else{
				std::cout<<" among boys"<<std::endl;

			}
		}
	}

	if(rank==0){
		std::cout<<name<<" was not found in the data"<<std::endl;
	}

	namesData.close();
}