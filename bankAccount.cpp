#include "bankAccount.h"
#include <iostream>
using namespace std;

int bankAccount::getBankNumber() // getting the bank number
{
	return balance;
}

bankAccount::bankAccount() // construtor. place them all at 0 to begin with
{
	bankNumber = 0;
	balance = 0.0;
}

double bankAccount::getBalance()
{
	return balance;
}

void bankAccount::setBalance(double bal)
{
	balance = bal;
}

void bankAccount::setBankNumber(int bankNum)
{
	bankNumber = bankNum;
}

double bankAccount::deposit(double deposit)
{

	balance = balance + deposit;

	return balance;
}

double bankAccount::withdraw(double withdraw)
{

	balance = balance - withdraw;
	return balance;
}

void bankAccount::print()
{

	cout << bankNumber << endl;
	cout << balance << endl;
}
