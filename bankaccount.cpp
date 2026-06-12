#include <iostream>
#include <cstdlib>

using namespace std;

class BankAccount {
    public:
       string name;
       int balance;
       int number;
       BankAccount(string accountName, int accountBalance,int accountNumber){
        // initialisation of variables
        // variables in constructor have different names
        name=accountName;
        // variables comes before constructor
        balance = accountBalance;
        number= accountNumber;
       }
       // print variables
           cout << balance; 
           cout << name;
           




         
}






