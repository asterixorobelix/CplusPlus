/*
Given the following header: vector<string> split(string target, string delimiter);
implement the function split so that it returns a vector of the strings in target that are separated by the string delimiter. 
For example: split("10,20,30", ",") should return a vector with the strings "10" , "20" , and "30". 
Similarly, split("do re mi fa so la ti do", " ") should return a vector with the strings "do" , "re" , "mi" , "fa" , "so" , "la" ,
"ti" , and "do" .

Sample Output:
This program will return a vector of strings which are separated by the delimiter
The target string is: 10,20,30
The delimiter is: ,
first string: 10
firstIndex: 2
nextIndex: 5
currentString: 20
nextIndex: -1
currentString: 30
The contents of the string vector is: 
10,20,30,

Sample Output:
This program will return a vector of strings which are separated by the delimiter
The target string is: do re mi fa so la ti do
The delimiter is:  
first string: do
firstIndex: 2
nextIndex: 5
currentString: re
nextIndex: 8
currentString: mi
nextIndex: 11
currentString: fa
nextIndex: 14
currentString: so
nextIndex: 17
currentString: la
nextIndex: 20
currentString: ti
nextIndex: -1
currentString: do
The contents of the string vector is: 
do,re,mi,fa,so,la,ti,do,

*/

#include <iostream>
#include <vector>

void split(std::string target, std::string delimiter);

int main(){

	std::cout<<"This program will return a vector of strings which are separated by the delimiter\n";

	std::string target ="do re mi fa so la ti do";
	std::string delimiter = " ";

	std::cout<<"The target string is: "<<target<<std::endl;
	std::cout<<"The delimiter is: "<<delimiter<<std::endl;

	split(target,delimiter);

}

void split(std::string target, std::string delimiter){
	std::string currentString;
	int currentIndex, nextIndex;
	std::vector<std::string> stringVector;

	currentIndex=target.find(delimiter);
	currentString=target.substr(0,currentIndex);

	stringVector.push_back(currentString);

	//std::cout<<"first string: "<<currentString<<std::endl;
	//std::cout<<"firstIndex: "<<currentIndex<<std::endl;

	while (currentIndex!=std::string::npos){
		nextIndex=target.find(delimiter,currentIndex+1);
		//std::cout<<"nextIndex: "<<nextIndex<<std::endl;
		currentString=target.substr(currentIndex+1,nextIndex-currentIndex-1);
		//std::cout<<"currentString: "<<currentString<<std::endl;
		stringVector.push_back(currentString);
		currentIndex=nextIndex;

	}
	
	std::cout<<"The contents of the string vector is: \n";

	for(x:stringVector){
		std::cout<<x<<",";
	}

	std::cout<<"\n";
}

