#pragma once
#include "bankAccount.h"


/*
                 c. Every bank offers a savings account. Derive the class savingsAccount
                        from the class bankAccount (designed in part a). This class inherits
                        members to store the account number and the balance from the base
                        class. A customer with a savings account typically receives interest,
                        makes deposits, and withdraws money. In addition to the operations
                        inherited from the base class, this class should provide the following
                        operations: set interest rate, retrieve interest rate, post interest,
                        withdraw (override the method of the base class), and print account information.
                        Add appropriate constructors.

*/

class savingsAccount: public bankAccount
{
public:
    savingsAccount();
    savingsAccount(int bankInfo, double bal);
    
    
    double setInterestRate();
    double getInterestRate();
    double postInterestRate();

    double deposit(double amount);
    double withdraw(double money);

    void print();


private:
    double interest;
    int bankAccount;
    double balance;


};

