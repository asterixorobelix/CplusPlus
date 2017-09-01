#pragma once
#include <string>
#include <iostream>

class Person
{
public:
	Person();
	Person(std::string the_name);
	Person(const Person& the_object);
	std::string get_name() const;
	Person& operator = (const Person& rt_side);
	friend std::istream& operator >>(std::istream& in_stream, Person& person_object);
	friend std::ostream& operator <<(std::ostream& out_stream, const Person& person_object);
private:
	std::string name;
};

