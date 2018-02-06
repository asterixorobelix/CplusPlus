/*Self Test q4, pg 546 of Savitch

*/

#include <iostream>

int main(){

	int *p1, *p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	std::cout << *p1 << " " << *p2 <<std::endl;//10 20
	p1 = p2;
	std::cout<< *p1 << " " << *p2 <<std::endl;//20 20
	*p1 = 30;
	std::cout<< *p1 << " " << *p2 << std::endl;//30 30

	*p2=30;
	*p1=15;

	std::cout<<*p1<<" "<<*p2<<std::endl;//15 15
	
}

