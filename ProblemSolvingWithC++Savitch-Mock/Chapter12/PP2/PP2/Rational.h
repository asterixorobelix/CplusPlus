#pragma once
class Rational
{
public:
	Rational(int num1, int num2);
	Rational(int num);
	Rational();
	friend bool operator ==(Rational& rat1, Rational& rat2);
private:
	int numerator, denominator;
};

