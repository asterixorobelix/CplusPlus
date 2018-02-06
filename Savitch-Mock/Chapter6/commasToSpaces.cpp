#include <iostream>
#include <string>
#include <fstream>
void search();

int main(){

	search();
}

void search(){
	std::ifstream data;
	data.open("yob2015.txt");

	std::ofstream dataOut;
	dataOut.open("yob2015NoCommas.txt");

	char currentChar;

	while(!data.eof()){
		data.get(currentChar);

		if(currentChar == ','){
			dataOut.put(' ');
		}

		else{
			dataOut.put(currentChar);
		}
		
	}

	data.close();
	dataOut.close();
}
