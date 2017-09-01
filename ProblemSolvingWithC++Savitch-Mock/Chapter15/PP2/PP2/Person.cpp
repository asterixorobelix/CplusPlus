#include "Person.h"

Person::Person()
{
}

Person::Person(std::string the_name)
{
	name = the_name;
}

std::string Person::get_name() const {
	return name;
}
