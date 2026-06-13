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
    void deposit(double amount){
        if (amount > balance)
            cout << "Insufficient funds!\n"
        else {
            balance -= amount;
            cout << "Withdrew £ << amount << "\n";

        }
            void printStatement(){
               cout << "Account owner: " << name << "\n";
            }

    }
int main(){

       // print variables
           cout << Balance:balance; 
           cout << Name:name;
           cout << Number:number;
           

}


         
}






