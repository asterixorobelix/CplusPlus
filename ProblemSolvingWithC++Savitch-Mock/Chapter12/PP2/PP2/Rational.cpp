#include "Rational.h"

Rational::Rational(int num1, int num2)
{
	numerator = num1;
	denominator = num2;
}

Rational::Rational(int num) {
	numerator = num;
	denominator = 1;
}

Rational::Rational() {
	numerator = 0;
	denominator = 1;
}

bool operator ==(Rational& rat1, Rational& rat2) {
	if (rat1.numerator == rat2.denominator&&rat1.denominator == rat2.denominator) {
		return true;
	}

	else {
		return false;
	}
}