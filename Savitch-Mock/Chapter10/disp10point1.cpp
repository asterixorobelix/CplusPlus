/*
Display 10point1, pg 574 of Savitch.

write a program which takes as input: account balance, interest rate (%) and months until loan maturity (<12).
The program must then output: When your CD matures in 7 months, it will have a balance of $101.87.
Use a struct for the bank deposit.

*/

#include <iostream>
using namespace std;

//Structure for a bank certificate of deposit:
struct CDAccount
{
double balance;
double interest_rate;
int term; //months until maturity
};
 
void get_data(CDAccount& the_account);
 
int main( )
{
	CDAccount account;
	get_data(account);
	 
	double rate_fraction, interest;
	rate_fraction = account.interest_rate / 100.0;
	interest = account.balance * rate_fraction * (account.term / 12.0);
	account.balance = account.balance + interest;
	 
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "When your CD matures in "
	<< account.term << " months,\n"
	<< "it will have a balance of $"
	<< account.balance << endl;
	return 0;
}
 
//Postcondition: the_account.balance and the_account.interest_rate
//have been given values that the user entered at the keyboard.
void get_data(CDAccount& the_account)
{
	cout << "Enter account balance: $";
	cin >> the_account.balance;
	cout << "Enter account interest rate: ";
	cin >> the_account.interest_rate;
	cout << "Enter the number of months until maturity\n"
	<< "(must be 12 or fewer months): ";
	cin >> the_account.term;
}