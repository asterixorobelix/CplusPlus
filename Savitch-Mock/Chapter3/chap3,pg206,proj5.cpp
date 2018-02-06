/*
chapter3, page 206, programming projects 5

Interest on a loan is paid on a declining balance, and hence a loan with an interest rate of, say, 
14 percent can cost significantly less than 14 percent of the balance. 
Write a program that takes a loan amount and interest rate as input and then outputs the monthly payments and balance of the loan
until the loan is paid off. Assume that the monthly payments are one twentieth of the original loan amount, 
and that any amount in excess of the interest is credited toward decreasing the balance due. 
Thus, on a loan of $20,000, the payments would be $1,000 a month. 
If the interest rate is 10 percent, then each month the interest is one-twelfth of 10 percent of
the remaining balance. The first month, (10 percent of $20,000)/12, or $166.67, would be paid in interest, 
and the remaining $833.33 would decrease the balance to $19,166.67. 
The following month the interest would be (10 percent of $19,166.67)/12, and so forth. 
Also have the program output the total interest paid over the life of the loan.

Your program should allow the user to repeat this calculation as often as desired.

Sample Output

Loan calculator
Enter the loan amount:
20000
Enter the yearly interest rate, as a percentage: 
14
Interest: 233.333
principalPayment: 766.667
Loan remaining: 19233.3
Interest: 224.389
principalPayment: 775.611
Loan remaining: 18457.7

............

Loan remaining: 1875.29
Interest: 21.8784
principalPayment: 978.122
Loan remaining: 897.173
Interest: 10.467
principalPayment: 989.533
Remaining principal: -104
totalInterest:2906.04
Enter y to repeat, anything else to exit:
t
Exiting..

*/

#include <iostream>

void getInput(int& amount,double& rate);
void calculate (int loan, double rate);

int main(){
	char repeat = 'y';
	int loanAmount;
	double interestRate;

	while (repeat=='y'||repeat=='Y'){

		getInput(loanAmount,interestRate);
	
		calculate (loanAmount, interestRate);

		std::cout<<"Enter y to repeat, anything else to exit:\n";
		std::cin>>repeat;

	}

	std::cout<<"Exiting..\n";



}

void getInput(int& amount,double& rate){
	std::cout<<"Enter the loan amount: \n";
	std::cin>>amount;

	std::cout<<"Enter the interest rate: \n";
	std::cin>>rate;

	rate=rate/12;

}

void calculate (int loan, double rate){
	constexpr double monthsToPay {20.0};

	const double monthlyPayment {static_cast<double>(loan)/monthsToPay};

	double monthlyInterest, principalPayment, totalInterest;

	std::cout<<"Loan: "<<loan<<std::endl;
	std::cout<<"Interest: \n"<<rate<<std::endl;

	while (loan>0){
		monthlyInterest=static_cast<double>(loan)*(static_cast<double>(rate)/100);
		std::cout<<"Monthly interest: "<<monthlyInterest<<std::endl;

		principalPayment=monthlyPayment- monthlyInterest;

		std::cout<<"principalPayment: "<<principalPayment<<std::endl;

		loan-=principalPayment;

		std::cout<<"Remaining principal: "<<loan<<std::endl;
		totalInterest+=monthlyInterest;

	}

	std::cout<<"\ntotalInterest:"<<totalInterest<<std::endl;
}