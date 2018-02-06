/*
Write a program which inputs a time from the console. 
The time should be in the format "HH:MM AM" or "HH:MM PM". 
Hours may be one or two digits, for example, "1:10 AM" or "11:30 PM". 
Your program should include a function which takes a string parameter containing the time. 
This function should convert the time into a four-digit military time, based on a 24-hour clock.
For example, "1:10 AM" would output "0110 hours" , "11:30 PM" would output "2330 hours" , and "12:15 AM" would output "0015 hours". 
The function may either write the time to the console or return a string to be written to the console by the main function.

Sample Output:
This program requires input in the following format: "HH:MM AM" or "HH:MM PM" 
Please enter the time:
11:47 PM
You entered: 11:47 PM
The given time, converted into four-digit military time, based on a 24-hour clock is:
2347 hours

*/

#include <iostream>
#include <string>

void getTime();

int main(){

	getTime();

}

void getTime(){
	std::cout<<"This program requires input in the following format: \"HH:MM AM\" or \"HH:MM PM\" \n";

	std::cout<<"Please enter the time:\n";

	std::string time, AMPM;

	std::cin>>time>>AMPM;

	std::cout<<"You entered: "<<time<<" "<<AMPM<<std::endl;

	int hourInt,minuteInt;
	std::string hour, minute;

	if(time.size()==4){
		hour=time.substr(0,1); //substr(pos,count) returns [pos, pos+count)
		//std::cout<<"hour: "<<hour<<std::endl;
		minute=time.substr(2,2);
		//std::cout<<"minute: "<<minute<<std::endl;
	}

	else if(time.size()==5){
		hour=time.substr(0,2); //substr(pos,count) returns [pos, pos+count)
		//std::cout<<"hour: "<<hour<<std::endl;
		minute=time.substr(3,2);
		//std::cout<<"minute: "<<minute<<std::endl;
	}

	else{
		std::cout<<"invalid input\n";
		exit(1);
	}

	hourInt=std::stoi(hour);
	minuteInt=std::stoi(minute);

	std::cout<<"The given time, converted into four-digit military time, based on a 24-hour clock is:\n";

	if(AMPM=="AM"){

		if(hourInt>=12){
			hourInt=hourInt-12;

		}

		std::cout<<"0"<<hourInt<<minuteInt<<" hours"<<std::endl;		
	}

	if(AMPM=="PM"){

		if(hourInt<12){
			hourInt=hourInt+12;

		}
		

		std::cout<<hourInt<<minuteInt<<" hours"<<std::endl;


	}

	

}