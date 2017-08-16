/*
Chapter 4, Savitch and Mock, Programming Project 1, page 276.

Write a program which computes the annual after-tax cost of a new house for the first year of ownership. 
The cost is computed as the annual mortgage cost minus the tax savings. 
The input should be the price of the house and the down payment. 
The annual mortgage cost can be estimated as 3 percent of the initial loan balance credited toward paying off the loan principal,
plus 6 percent of the initial loan balance in interest. The initial loan balance is the price minus the down payment. 
Assume a 35 percent marginal tax rate and assume that interest payments are tax deductible. So, the tax savings is 35 percent of the interest payment. 
Your program should use at least two function definitions and should allow the user to repeat this calculation as often as the user wishes.

Sample Output:
Enter the price of your house:
1000
Enter your downpayment on the house:
234
The cost of your mortgage is: R 52.854 per year

Enter the price of your house:
10
Enter your downpayment on the house:
2345
The DownPayment cannot be greater than the house price
Invalid input
Exiting..

Enter the price of your house:
s
Invalid input
Exiting..
*/
#include "HouseCostCalculator.h"
#include <iostream>
using namespace std;

int main() {
	char choice = 't';

	while (choice != 'x' || choice != 'X')
	{
		HouseCostCalculator::GetUserInput();

		cout << "Enter x to exit,anything else will repeat the program:\n";
		cin >> choice;

	} 
	
}