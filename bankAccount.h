#pragma once


/* 
                 Define the class bankAccount to store a bank customer’s account
                     number and balance. Suppose that account number is of type int,
                     and balance is of type double. Your class should, at least, provide the
                     following operations: set the account number, retrieve the account
                     number, retrieve the balance, deposit and withdraw money, and print
                     account information. Add appropriate constructors.
*/
class bankAccount
{

public:
    int getBankNumber();
    bankAccount();
    bankAccount(int bankInfo, double bal);
    double getBalance();
    void setBalance(double bal);
    void setBankNumber(int bankNum);

    double deposit(double deposit);
    double withdraw(double withdraw);

    void print();


private:
    int bankNumber;
    double balance; 
};

