#include "Person.h"

Person::Person(int age)
{
	_Age = age;
}

bool operator  == (const Person& p1, const Person& p2) {
	if (p1._Age == p2._Age) {
		return true;
	}

	else {
		return false;
	}
}

bool operator !=(const Person& p1, const Person& p2) {
	return !(p1 == p2);
}

bool operator <(const Person&p1, const Person& p2) {
	if (p1._Age < p2._Age) {
		return true;
	}

	else {
		return false;
	}
}


bool operator >(const Person& p1, const Person& p2) {
	return !(p1 < p2);
}

bool operator <=(const Person& p1, const Person& p2) {
	if (p1 < p2 || p1 == p2) {
		return true;
	}
	else {
		return false;
	}
}

bool operator >=(const Person& p1, const Person& p2) {
	return !(p1 <= p2);
}

