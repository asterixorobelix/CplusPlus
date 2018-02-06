/*
practice program 1, pg 641 of Savitch

Redefine CDAccount from Display 10.1 (pg 574) so that it is a class rather than a structure. 
Use the same member variables as in Display 10.1 but make them private. 
Include member functions for each of the following: one to return the initial balance, one to return the balance at maturity, one to
return the interest rate, and one to return the term. 
Include a constructor that sets all of the member variables to any specified values, as well as a default constructor. 
Embed your class definition in a test program.

*/

#include <iostream>

class CDAccount{
private:
	double initialBalance;
	double interestRate;
	int maturityTerm;//months until maturity
public:
	//accessor functions;
	void getBalance();
	void getMaturityBalance();
	void getInterestRate();
	void getTerm();

	//constructor
	CDAccount(double balance, double rate, int term);
	//Default constructor
	CDAccount();

};

int main(){
	double userBalance, userRate;
	int userTerm;

	std::cout<<"Enter the balance of the account: \n";
	std::cin>>userBalance;

	std::cout<<"Enter the interestRate, as a percent:\n";
	std::cin>>userRate;

	std::cout<<"Enter the term:\n";
	std::cin>>userTerm;

	CDAccount account1(userBalance,userRate,userTerm);//create a variable called account1 of type CDAccount
	account1.getBalance();
	account1.getInterestRate();
	account1.getTerm();
	account1.getMaturityBalance();

}

void CDAccount::getBalance(){
	std::cout<<"The balance is: "<<initialBalance<<std::endl;
}

void CDAccount::getInterestRate(){
	std::cout<<"The interestRate is: "<<interestRate<<std::endl;
}

void CDAccount::getTerm(){
	std::cout<<"The term is: "<<maturityTerm<<std::endl;
}

void CDAccount::getMaturityBalance(){
	double interest;
	interest =initialBalance*(interestRate/static_cast<double>(100))*(maturityTerm/12);
	std::cout<<"The balance  at maturity is: "<<initialBalance+interest<<std::endl;
}

CDAccount::CDAccount(double balance, double rate, int term){
	initialBalance =balance;
	interestRate =rate;
	maturityTerm =term;
}

CDAccount::CDAccount(){
	//do nothing
}