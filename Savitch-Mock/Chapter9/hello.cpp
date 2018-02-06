#include <iostream>
#include <string>

int main(){
	
	char h[]="hello";
	const char * foo = h; 
	std::cout<<foo[0]<<std::endl;
	std::cout<<foo[1]<<std::endl;

	
	
	std::string x = "what";
	char* p_x0    = &x[0];
	std::cout<<p_x0<<std::endl;

	char* p_x1    = &x[1];
	std::cout<<p_x1<<std::endl;
}


	