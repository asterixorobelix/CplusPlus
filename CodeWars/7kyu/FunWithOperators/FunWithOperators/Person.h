#pragma once
class Person
{
public:
	Person(int age);
	friend bool operator  == (const Person& p1, const Person& p2);
	friend bool operator !=(const Person& p1, const Person& p2);
	friend bool operator <(const Person&p1, const Person& p2);
	friend bool operator >(const Person& p1, const Person& p2);
	friend bool operator <=(const Person& p1, const Person& p2);
	friend bool operator >=(const Person& p1, const Person& p2);
private:
	int _Age;
};

