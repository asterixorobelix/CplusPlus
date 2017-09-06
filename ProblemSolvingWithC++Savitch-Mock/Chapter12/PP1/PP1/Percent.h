#pragma once
#include <iostream>
using namespace std;

class Percent
{
public:
	friend bool operator ==(const Percent& first, const Percent& second);
	friend bool operator <(const Percent& first, const Percent& second);
	Percent();
	Percent(int percent_value);
private:
	int value;
};

