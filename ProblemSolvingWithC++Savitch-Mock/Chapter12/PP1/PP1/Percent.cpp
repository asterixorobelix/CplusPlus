#include "Percent.h"

Percent::Percent()
{
}

Percent::Percent(int percent_value) {
	value = percent_value;
}


bool operator ==(const Percent& first, const Percent& second) {
	if (first.value == second.value) {
		return true;
	}
	else {
		return false;
	}
}

bool operator <(const Percent& first, const Percent& second) {
	if (first.value < second.value) {
		return true;
	}

	else {
		return false;
	}
}

