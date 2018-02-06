/*
Write code which reads in integers from the file infile.txt, sums the numbers and writes the sum to the file outfile.txt

*/
#include <fstream>
#include <iostream>

int main(){
	int total {0}, number;

	//OR 

	/*int number1,number2, number3;*/

	std::ifstream input;
	input.open("infile.txt");

	std::ofstream output;
	output.open("outfile.txt");

	//input>>number1>>number2<<number3;
	//total = number1+number2+number3;
	

	while (input>>number){
		input>>number;
		total+=number;

	}
	

	//OR

	/*
	while (!input.eof()){
		input>>number;
		total+=number;

	}
	*/
	
	std::cout<<"The total is: "<<total<<std::endl;

	output<<total;

	input.close();
	output.close();
}