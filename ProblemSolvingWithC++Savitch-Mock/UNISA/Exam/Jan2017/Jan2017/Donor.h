#pragma once
#include <string>
using namespace std;

class Donor
{
public:
	Donor();
	Donor(string name, string contact, string type);
	~Donor();
private:
	string name, contact, type;
};

