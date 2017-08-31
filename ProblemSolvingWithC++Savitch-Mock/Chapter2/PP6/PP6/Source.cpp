/*
chapter2, page 137, programming projects 6
A mobile phone operator charges $0.5 per minute for the first 10 minutes for an international call. Any minutes over that cost $1 per minute. 
From the subscriber's gross cost, 5% is withheld for VAT, 10% is witheld for cross-network charge, 2% is witheld for contribution to the regulating authority,
and 3% is witheld for the company's scholarship program.
Write a program which takes the number of minutes for an overseas call as input and output the operator's gross income.
The program should also output the amount witheld for each category and the nett income generated from the call.
Sample Output:
Gross Income: 27
VAT: 1.35
Network: 2.7
Scholarship: 0.81
Regulator: 0.54

Gross Income: 1
VAT: 0.05
Network: 0.1
Scholarship: 0.03
Regulator: 0.02
*/
#include <iostream>
using namespace std;

void CalculateIncome(int minutes);

int main() {
	CalculateIncome(32);
	CalculateIncome(2);
}

void CalculateIncome(int minutes) {
	const double FIRSTTEN = 0.5; //dollar per min
	const double FALLBACK = 1; //dollar per min
	const double VAT{ 0.05 }, XNETWORK{ 0.1 }, REGAUTH{ 0.02 }, SCHOLAR{ 0.03 };

	int belowTen, aboveTen;

	if (minutes <= 10) {
		belowTen = minutes;
		aboveTen = 0;
	}

	else {
		belowTen = 10;
		aboveTen = minutes - 10;
	}

	double grossIncome = FIRSTTEN*belowTen + aboveTen*FALLBACK;

	cout << "Gross Income: " << grossIncome << endl;
	cout << "VAT: " << grossIncome*VAT << endl;
	cout << "Network: " << XNETWORK*grossIncome << endl;
	cout << "Scholarship: " << SCHOLAR*grossIncome << endl;
	cout << "Regulator: " << REGAUTH*grossIncome << endl;
	cout << endl;
}