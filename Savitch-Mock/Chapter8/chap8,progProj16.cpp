/*
pg 535 Savitch, progProj16, chapter 8.

In many races, competitors wear an RFID tag on their shoe.

In this problem, there are three sensors, at the start, at the 7 mile point and at the finish line; after 13.1 miles.
Below is sample data for three racers. The first line is the gun time in 24 hour format (HH MM SS).
Subsequent lines contain the sensor ID (0=start, 1 = mile 7, 2=finish), followed by the racer's number, followed by the time stamp.

08 00 00
0,100,08 00 00
0,132,08 00 03

There are currently only three racers, the IDs are as follows: 100, 132, 140,156 and 182.
The race log is contained in a file called raceLog.txt. Write a program which takes the log data and allows a user to enter a racer's number.
The program should then ouput the racer's overall finish place, overall race time and overall minutes/mile.

The program should also detect cheating. If a racer misses a sensor, they are a cheat. If their race is suspiciously fast (faster than 5 minutes per mile), they are a cheat.
output a list of suspected cheats.

Sample output:
Enter raceNumber:
100
You entered: 100
start time: 08 02 00
finish time: 09 35 10
overall minutes/mile: 2.59524
finish placing: 3
nathan@NathanStasinAcer:~/Desktop/practiceCode$ ./1
Enter raceNumber:
132
You entered: 132
start time: 08 02 00
finish time: 09 34 15
overall minutes/mile: 2.59524
finish placing: 2

*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>//std::sort

void getUserInput(int& raceNumber);

void getRaceData(int raceNumber);

void timeFormat(int hour, int min, int second);

int main(){

	int userRaceNumber;

	getUserInput(userRaceNumber);
	getRaceData(userRaceNumber);
	
}

void getUserInput(int& raceNumber){

	std::cout<<"Enter raceNumber:\n";

	std::cin>>raceNumber;

	std::cout<<"You entered: "<<raceNumber<<std::endl;

}

void getRaceData(int raceNumber){

	int startHour, startMinute, startSecond, raceDistance {7};
	float finishTime, startTime, racerFinishTime;
	std::string sensorID;//getline returns a string
	std::string racerNumber;

	int currentHour, currentMinute, currentSecond;

	std::vector<float> finishTimes;
	
	std::ifstream raceData;

	raceData.open("raceLog.txt");

	raceData>>startHour>>startMinute>>startSecond;

	startTime=startHour*60+startMinute+static_cast<float>(startSecond)/60;

	std::cout<<"start time: ";

	timeFormat(startHour,startMinute, startSecond);	

	while(!raceData.eof()){
		std::getline(raceData,sensorID,',');
		//std::cout<<"sensorID:"<<sensorID<<std::endl;
		std::getline(raceData,racerNumber,',');
		//std::cout<<"racerNumber: "<<racerNumber<<std::endl;

		raceData>>currentHour>>currentMinute>>currentSecond;
		//std::cout<<"currentTime: "<<currentHour<<" "<<currentMinute<<" "<<currentHour<<std::endl;


		if (sensorID=="\n2"){
			finishTime=currentHour*60+currentMinute+static_cast<float>(currentSecond)/60;
			finishTimes.push_back(finishTime);

			if(std::stoi(racerNumber)==raceNumber){
				racerFinishTime=finishTime;	
				std::cout<<"finish time: ";
				timeFormat(currentHour,currentMinute, currentSecond);				
			}
		}
	}

	std::cout<<"overall minutes/mile: "<<(finishTime-startTime)/static_cast<float>(raceDistance)<<std::endl;

	std::sort(finishTimes.begin(),finishTimes.end());

	int count{1};

	for(int i=0;i<finishTimes.size();i++){
		if(finishTimes[i]==racerFinishTime){
			std::cout<<"finish placing: "<<count<<std::endl;
		}
		++count;
	}

	raceData.close();
/*
	for(x:finishTimes){
		std::cout<<x<<" ";
	}

	std::cout<<"\n";
*/

}

void timeFormat(int hour, int min, int second){
	if(hour<10){
		std::cout<<"0"<<hour;

		if(min<10){
			std::cout<<" 0"<<min;

			if(second<10){
				std::cout<<" 0"<<second<<std::endl;
			}
			else{
				std::cout<<" "<<second<<std::endl;
			}
		}

		else{
			std::cout<<" "<<min;

			if(second<10){
				std::cout<<" 0"<<second<<std::endl;
			}

			else{
				std::cout<<" "<<second<<std::endl;
			}
		}
	}

	else{
		std::cout<<hour<<" "<<min<<" "<<second<<std::endl;
	}		
}