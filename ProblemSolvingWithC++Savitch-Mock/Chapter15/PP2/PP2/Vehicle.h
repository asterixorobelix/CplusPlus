#pragma once
#include <string>
#include "Person.h"

class Vehicle
{
public:
	Vehicle();
	std::string Manufacturer;
	int Cylinders;
	Person Owner;
};

