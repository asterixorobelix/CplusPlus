//Program to demonstrate pointers and dynamic variables.

/*
*p2 == 42
*p1 == 53
*p2 == 53
*p1 == 88
*p2 == 53
Hope you got the point of this example!
*/

#include <iostream>
 
int main( ){
	int a {12};

	int *b = &a;

	std::cout<<"a = "<<a<<std::endl;//a = 12

	//std::cout<<"*a = "<<*a<<std::endl; Illegal;

	std::cout<<"*b = *a = "<<*b<<std::endl;//*b = *a = 12

	std::cout<<"b = &a"<<b<<std::endl;//b = &a = 0xbf95464c

	std::cout<<"&a = "<<&a<<std::endl;//address of //&a = 0xbf95464c

	int *p1, *p2;//pointer variable p1, which points to a variable of type int.
	 
	p1 = new int;

	std::cout<<"p1 = "<<p1<<std::endl; //p1 = 0x9353e18
	*p1 = 42;

	std::cout<<"p1 = "<<p1<<std::endl;//p1 = 0x9353e18
	p2 = p1;
	std::cout<< "*p2 == " << *p2 <<std::endl; //*p2 == 42
	*p2 = 53;
	std::cout<< "*p1 == " << *p1 <<std::endl; //*p1 == 53
	std::cout<< "*p2 == " << *p2 <<std::endl;//*p2 == 53
	p1 = new int;
	*p1 = 88;
	std::cout<< "*p1 == " << *p1 <<std::endl; //*p1 == 88
	std::cout<< "*p2 == " << *p2 <<std::endl; //*p2 == 53

}