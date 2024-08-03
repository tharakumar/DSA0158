#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    double balance;
public:
    BankAccount(const string &name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
        cout << "Bank account for " << accountHolder << " created with balance $" << balance << endl;
    }
    ~BankAccount() {
        cout << "Bank account for " << accountHolder << " is being closed." << endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
    void checkBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};
int main() { 
    BankAccount account("Alice", 1000.0); 
    account.deposit(500.0);
    account.withdraw(200.0);
    account.checkBalance(); 
    return 0;
}