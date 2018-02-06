/*pg 398, savitch and mock, practice program 2

Write a program which takes as input the temperature readings of Cape Town over a period of 2 weeks. 
The program should find and print the day with the highest temperature in degrees c. 
The file, temperatures.txt, contains numbers of type double, seperated by blanks. The output should be the day and temperature.
eg: day 12, 23 C

Sample output:
The highest temperature was 28.9 c, on day 9 of the two week period
*/

#include <iostream>
#include <fstream>

void calculate();

int main (){

	calculate();

}

void calculate(){

	float highestTemp {0}, temp;
	int day {1}, highestDay;

	std::ifstream temperatures;
	temperatures.open ("temperatures.txt");

	while (temperatures>>temp){
		

		if(temp>=highestTemp){
			highestTemp=temp;
			highestDay=day;
		}
		++day;
	}

	std::cout<<"The highest temperature was "<<highestTemp<<" c, on day "<<highestDay<<" of the two week period\n";

	temperatures.close()

}

