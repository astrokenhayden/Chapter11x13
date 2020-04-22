#pragma once
#include "bankAccount.h"


/*
                b. Every bank offers a checking account. Derive the class
                        checkingAccount from the class bankAccount (designed in part a).
                        This class inherits members to store the account number and the
                        balance from the base class. A customer with a checking account
                        typically receives interest, maintains a minimum balance, and pays
                        service charges if the balance falls below the minimum balance. Add
                        member variables to store this additional information. In addition to
                        the operations inherited from the base class, this class should provide the following operations:
                        set interest rate, retrieve interest rate,
                        set minimum balance, retrieve minimum balance, set service charges,
                        retrieve service charges, post interest, verify if the balance is less than
                        the minimum balance, write a check, withdraw (override the method
                        of the base class), and print account information. Add appropriate
                        constructors.
*/
class checkingAccount: public bankAccount
{
    
public:
    
    checkingAccount();
    double setInterest();
    double getInterestRate();
    double setMinBalance();
    double getMinBalance();
    double setServeChar();
    double getServeChar();
    double writeCheck();

    double postInterest();
    double underMinBalance();

    void print();


private:
    double interest;
    double balance;

};

