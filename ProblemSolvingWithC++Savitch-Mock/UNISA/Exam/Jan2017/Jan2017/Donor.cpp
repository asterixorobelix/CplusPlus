#include "Donor.h"
#include <string>

using namespace std;

Donor::Donor()
{
	name = type=contact=" ";
}

Donor::Donor(string nm, string cntct, string tp) {
	name = nm;
	contact = cntct;
	type = tp;
}


Donor::~Donor()
{
}
