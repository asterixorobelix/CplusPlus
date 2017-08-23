/*
Bob needs a fast way to calculate the volume of a cuboid with three values: length, width and the height of the cuboid. 
Write a function to help Bob with this calculation.

Sample Output:
*/
#include <exception>
#include <cassert>
#include <iostream>
#include "Cuboid.h"

int main() {
	Cuboid cube = Cuboid();
	try
	{
		assert(cube.getVolumeOfCuboid(1, 2, 2) == 4);
		assert(cube.getVolumeOfCuboid(6.3, 2, 5) == 63);
	}
	catch (const std::exception& ex)
	{
		std::cout << "Assert failed\n";
	}
	
	
}