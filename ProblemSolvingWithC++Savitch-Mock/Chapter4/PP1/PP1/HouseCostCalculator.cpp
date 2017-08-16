#include "HouseCostCalculator.h"
#include <string>
#include <iostream>
using namespace std;

void HouseCostCalculator::GetUserInput() {
	string Price, Payment;
	double HousePrice, DownPayment;

	cout << "Enter the price of your house:\n";
	cin >> Price;

	try
	{
		HousePrice = stod(Price);
	}
	catch (const std::exception&)
	{
		ErrorMessage();
	}

	cout << "Enter your downpayment on the house:\n";
	cin >> Payment;

	try
	{
		DownPayment = stod(Payment);
	}
	catch (const std::exception&)
	{
		ErrorMessage();
	}

	ComputeCost(HousePrice, DownPayment);
}

void HouseCostCalculator::ErrorMessage() {
	cout << "Invalid input\n";
	cout << "Exiting..\n";
	exit(1);
}

void HouseCostCalculator::ComputeCost(double HousePrice, double DownPayment) {
	const double MARGINALTAXRATE{ 0.35 };
	const double ANNUALMORTGAGECOSTLOANBALANCE{ 0.03 };
	const double ANNUALMORTGAGECOSTLOANBALANCEINTEREST{ 0.06 };

	double InitialLoanBalance = HousePrice - DownPayment;

	if (InitialLoanBalance < 0) {
		cout << "The DownPayment cannot be greater than the house price\n";
		ErrorMessage();
	}
	double cost = InitialLoanBalance*ANNUALMORTGAGECOSTLOANBALANCE + InitialLoanBalance*ANNUALMORTGAGECOSTLOANBALANCEINTEREST*(1 - MARGINALTAXRATE);

	cout << "The cost of your mortgage is: R " << cost << " per year\n";
}
