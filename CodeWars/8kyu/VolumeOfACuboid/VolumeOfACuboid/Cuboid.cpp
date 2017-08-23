#include "Cuboid.h"



Cuboid::Cuboid()
{
}

double Cuboid::getVolumeOfCuboid(double length, double width, double height) {
	double vol = length*width*height;

	return vol;
}
