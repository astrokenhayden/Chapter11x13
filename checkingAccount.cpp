#include "checkingAccount.h"
#include <iostream>
using namespace std;

checkingAccount::checkingAccount() {
	bankAccountNum = 0;
	balance = 0.0;
	interest = 0.0;
	minBalance = 0;
	serveChar = 0;
}
checkingAccount::checkingAccount(int bankInfo, double bal)
{
	bankAccountNum = bankInfo;
	balance = bal;
	interest = 0.0;
	serveChar = 0;
	minBalance = 0;
}

void checkingAccount::setInterest(double inter)
{
	interest = inter;
}

double checkingAccount::getInterestRate()
{
	return interest;
}

void checkingAccount::setMinBalance(double min)
{
	minBalance = min;
}

double checkingAccount::getMinBalance()
{
	return 0.0;
}

void checkingAccount::setServeChar(double charge)
{
	serveChar = charge;
}

double checkingAccount::getServeChar()
{
	
	return minBalance;
}

double checkingAccount::writeCheck(double check)
{
	balance = balance - check;
	return balance;
}

double checkingAccount::deposit(double amount)
{
	balance = balance + amount;
	return balance;
}

double checkingAccount::postInterest()
{
	return 0.0;
}

bool checkingAccount::underMinBalance()
{
	if (balance <= minBalance) {
		return true;
	}
	else {
		return false;
	}
	
}

void checkingAccount::print()
{
	bankAccount::print();

	cout << "Interest Checking ACCT#       " << bankAccountNum << "     Balance: $" << balance << endl;
}
