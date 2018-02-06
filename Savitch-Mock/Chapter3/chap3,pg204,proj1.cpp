/*
chapter3, page 204, programming projects 1

Write a program that computes the cost of a long-distance call. The cost of the call is determined according to the following 
rate schedule:
	a. Any call started between 8:00 am and 6:00 pm, Monday through Friday, is billed at a rate of $0.40 per minute.
	b. Any call starting before 8:00 am or after 6:00 pm, Monday through Friday, is charged at a rate of $0.25 per minute.
	c. Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.
The input will consist of the day of the week, the time the call started, and the length of the call in minutes. 
The output will be the cost of the call. 
The time is to be input in 24-hour notation, so the time 1:30 pm is input as 13:30
The day of the week will be read as one of the following pairs of character values, which are stored in two variables of type char :
Mo Tu We Th Fr Sa Su

Be sure to allow the user to use either uppercase or lowercase letters or a combination of the two. 
The number of minutes will be input as a value of type int . 
(You can assume that the user rounds the input to a whole number of minutes.) 
Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.

Sample Output

Call cost calculator
Enter the day of the week: 
TH
Enter the hour of the call in 24 hour notation: 
5
Enter the minute of the call in 24 hour notation: 
34
Enter the length of the call in minutes: 
89
Your call occurred on Thursday
Off peak call charges apply
The cost of the call: $22.25

Enter Y if you would like to repeat: 
t
Exiting..

*/

#include <iostream>

/*Mo,Tu,We,Th,Fr,Sa,Su*/


void getInput(char &firstLetter,char &secondLetter, int &hour,int &minute, int &callLength);

float calculateCost(char firstLetter,char secondLetter,int hour,int minute,int callLength);

int main(){
	char firstLetter,secondLetter;
	int hour,minute,callLength;

	getInput(firstLetter, secondLetter, hour, minute, callLength);
	calculateCost(firstLetter, secondLetter, hour, minute, callLength);

}

void getInput(char &firstLetter,char &secondLetter, int &hour,int &minute, int &callLength){

	std::cout<<"Enter the first letter of day of the week:\n";
	std::cin>>firstLetter;

	std::cout<<"Enter the secondLetter of day of the week:\n";
	std::cin>>secondLetter;

	std::cout<<"Enter the hour of the call, in 24 hour notation: \n";
	std::cin>>hour;

	std::cout<<"Enter the minute of the call start: \n";
	std::cin>>minute;

	std::cout<<"Enter the length of the call in minutes: \n";
	std::cin>>callLength;

}

float calculateCost(char firstLetter,char secondLetter,int hour,int minute,int callLength){
	constexpr float weekPeak {0.4}, weekOffPeak {0.25}, weekend {0.15};//per minute call cost
	float cost {0};

	if (firstLetter=='s' ||firstLetter=='s'){
		std::cout<<"Call occurred on weekend\n";
		cost = hour*60*weekend+minute*weekend;
		std::cout<<"The cost of your call is: $"<<cost<<std::endl;
	}

	else{
		std::cout<<"Your call occurred during the week\n";

		if(hour>=8||hour<=18){
			std::cout<<"Your call occurred during peak hours\n";
			cost = hour*60*weekPeak+minute*weekPeak;
			std::cout<<"The cost of your call is: $"<<cost<<std::endl;	
		}

		else{

			std::cout<<"Your call occurred during offpeak hours\n";
			cost = hour*60*weekOffPeak +minute*weekOffPeak ;
			std::cout<<"The cost of your call is: $"<<cost<<std::endl;	

		}
	}

	return cost;
}