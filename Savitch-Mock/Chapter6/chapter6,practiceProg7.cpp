/*pg 399, savitch and mock, practice program 7

Write a program that merges the numbers in two files (file1.txt, file1.txt) and writes all the numbers into a third file (file3.txt). 
Your program takes input from two different files and writes its output to a third file. 
Each input file contains a list of numbers of type int on seperate lines, in sorted order from the smallest to the largest. 
eg: 
24
56
77
82

After the program is run, the output file will contain all the numbers in the two input files in one longer list in sorted order from smallest to largest. 
Your program should define a function that is called with the two input-file streams and the output-file stream as three arguments.

Sample output:
the unsorted numbers in both files are: 
1 4 5 8 9 11 24 56 77 82 1 2 3 9 11 13 45 46 47 49 52 58 
the sorted numbers in both files are: 
1 1 2 3 4 5 8 9 9 11 11 13 24 45 46 47 49 52 56 58 77 82 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

void mergeFiles(std::ifstream& firstFile, std::ifstream& secondFile);

int main(){
	std::ifstream file1, file2;
	file1.open("file1.txt");
	file2.open("file2.txt");

	if(file1.fail()||file2.fail()){
		std::cout<<"Input file failed to open\n";
		exit(1);
	}

	mergeFiles(file1,file2);

	file1.close();
	file2.close();
	
}

void mergeFiles(std::ifstream& firstFile, std::ifstream& secondFile){

	std::ofstream outputFile;
	outputFile.open("file3.txt");

	int currentNumber;

	std::vector<int> numbers;

	while (!firstFile.eof()){
		firstFile>>currentNumber;
		//std::cout<<currentNumber<<std::endl;
		numbers.push_back(currentNumber);
	}

	while(!secondFile.eof()){

		secondFile>>currentNumber;
		numbers.push_back(currentNumber);
	}

	std::sort(begin(numbers),end(numbers));

	std::cout<<"The sorted numbers are:"<<std::endl;

	for(x:numbers){
		std::cout<<x<<" ";
		outputFile<<x<<'\n';
	}

	std::cout<<"\n";

	outputFile.close();

}