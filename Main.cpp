/* Programmer  : Kendra Hayden
   Date		   : April 22, 2020
   Assignment  : Chapter 11 exercise 13 (steps a-d)
   Description : 
                a. Define the class bankAccount to store a bank customer’s account
                        number and balance. Suppose that account number is of type int,
                        and balance is of type double. Your class should, at least, provide the
                        following operations: set the account number, retrieve the account
                        number, retrieve the balance, deposit and withdraw money, and print
                        account information. Add appropriate constructors.
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
                 c. Every bank offers a savings account. Derive the class savingsAccount
                        from the class bankAccount (designed in part a). This class inherits
                        members to store the account number and the balance from the base
                        class. A customer with a savings account typically receives interest,
                        makes deposits, and withdraws money. In addition to the operations
                        inherited from the base class, this class should provide the following
                        operations: set interest rate, retrieve interest rate, post interest, 
                        withdraw (override the method of the base class), and print account information.
                        Add appropriate constructors.
        
                 d. Write a program to test your classes designed in parts b and c
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <Windows.h>
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main() {

   
    int bankNumber = 1000;
    double bal = 3000;
    //bankAccount bank(bankNumber, bal);
    

    //bank.print();

    checkingAccount bank2(bankNumber++, 1000);
    checkingAccount bank3(bankNumber++, 450);
    savingsAccount bank4(bankNumber++, 9300);
    savingsAccount bank5(bankNumber++, 32.92);

    bank2.postInterest();
    bank3.postInterest();
    bank4.postInterestRate();
    bank5.postInterestRate();
    cout << "                     Bank Acount Program              " << endl << endl;
    cout << "******************** Before Withdrawals ********************" << endl;
    cout << setprecision(10);
    bank2.print();
    bank3.print();
    bank4.print();
    bank5.print();

    cout << "*************************************************************" << endl << endl;
    
    bank2.writeCheck(250);
    bank3.writeCheck(350);
    bank4.withdraw(120);
    bank5.withdraw(290);

    cout << "******************** After Withdrawals **********************" << endl;

    bank2.print();
    bank3.print();
    bank4.print();
    bank5.print();

    cout << "*************************************************************" << endl << endl;


	system("Pause");
	return 0;
}
