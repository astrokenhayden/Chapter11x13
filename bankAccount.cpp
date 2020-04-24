#include "bankAccount.h"
#include <iostream>
using namespace std;

int bankAccount::getBankNumber() // getting the bank number
{
	return bankNumber;
}

bankAccount::bankAccount()
{
	bankNumber = 0;
	balance = 0.0;
}

bankAccount::bankAccount(int bankInfo, double bal) // construtor. place them all at 0 to begin with
{
	bankNumber = bankInfo;
	balance = bal;
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
	//cout << "Acct#: " << bankNumber << "  Balance:  $" << balance << endl;

}
