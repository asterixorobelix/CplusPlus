/*
Bob needs a fast way to calculate the volume of a cuboid with three values: length, width and the height of the cuboid. 
Write a function to help Bob with this calculation.
*/
#include <iostream>

double getVolumeOfCubiod(double length, double width, double height);

int main (){
	double length, height, width, volume;
	std::cout<<"Enter length: "<<std::endl;
	std::cin>>length;

	std::cout<<"Enter width: "<<std::endl;
	std::cin>>width;

	std::cout<<"Enter height: "<<std::endl;
	std::cin>>height;

	volume = getVolumeOfCubiod(length,width,height);

	std::cout<<"The volume is: "<<volume<<std::endl;

}

double getVolumeOfCubiod(double length, double width, double height) {

	return length*width*height;
}