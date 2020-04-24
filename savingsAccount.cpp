#include "savingsAccount.h"
#include "bankAccount.h"
#include <iostream>
using namespace std;

savingsAccount::savingsAccount() {
	interest = 0.0;
	balance = 0;
	bankAccount = 0;

}
savingsAccount::savingsAccount(int bankInfo, double bal)
{
	interest = 0.0;
	balance = bal;
	bankAccount = bankInfo;

}

double savingsAccount::setInterestRate()
{
	return 0.0;
}

double savingsAccount::getInterestRate()
{
	return 0.0;
}

double savingsAccount::postInterestRate()
{
	return 0.0;
}

double savingsAccount::deposit(double amount)
{
	//bankAccount::deposit(amount);
	balance = balance + amount;
	return balance;
}

double savingsAccount::withdraw(double money)
{
	balance = balance - money;

	return balance;
}

void savingsAccount::print()
{
	bankAccount::print();
	
	cout << "Savings ACCT#:                " << bankAccount << "     Balance: $" << balance << endl;
}
