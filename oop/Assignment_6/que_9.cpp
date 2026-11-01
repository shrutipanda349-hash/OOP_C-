
/* Q9. WAP to define a class to represent a bank
   account. Include data members for depositor name,
   account number, type of account and balance.
   Include member functions to assign initial values,
   deposit an amount, withdraw an amount after
   checking the balance, and display the name and
   balance. Create an object and display the name
   and balance. */

#include <iostream>
using namespace std;

class Bank {
    string name, type;
    int account;
    float balance;

public:
    void assign(string n, int a, string t, float b) {
        name = n;
        account = a;
        type = t;
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;

    b.assign("Shruti", 12345, "Savings", 5000);
    b.deposit(1000);
    b.withdraw(500);
    b.display();

    return 0;
}
