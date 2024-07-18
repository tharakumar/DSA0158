#include <iostream>
#include <string>
using namespace std;
class Customer {
protected:
    string name;
    int accountNumber;
    string accountType;
public:
    void setCustomerDetails(string n, int accNo, string accType) {
        name = n;
        accountNumber = accNo;
        accountType = accType;
    }
    void displayCustomerDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
    }
};
class Account {
protected:
    double balance;
public:
    Account() : balance(30) {}
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public Customer, public Account {
};
class CurrentAccount : public Customer, public Account {
};
int main() {
    SavingsAccount savAcc;
    CurrentAccount curAcc;
    char accountTypeChoice;
    string name;
    int accountNumber;
    string accountType;
    int choice;
    double amount;
    cout << "Enter S for saving customer and C for current a/c customer : ";
    cin >> accountTypeChoice;
    cout << "Enter Customer Name : ";
    cin >> name;
    cout << "Enter Account Number  : ";
    cin >> accountNumber;
    if (accountTypeChoice == 'S' || accountTypeChoice == 's') {
        accountType = "Saving";
        savAcc.setCustomerDetails(name, accountNumber, accountType);
    } else if (accountTypeChoice == 'C' || accountTypeChoice == 'c') {
        accountType = "Current";
        curAcc.setCustomerDetails(name, accountNumber, accountType);
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }
    do {
        cout << "\nChoose Your Choice\n";
        cout << "1)   Deposit\n";
        cout << "2)   Withdraw\n";
        cout << "3)   Display Balance\n";
        cout << "4)   Display with full Details\n";
        cout << "5)   Exit\n";
        cout << "Enter Your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter amount to Deposit : ";
            cin >> amount;
            if (accountType == "Saving") {
                savAcc.deposit(amount);
            } else {
                curAcc.deposit(amount);
            }
            break;
        case 2:
            cout << "Enter amount to be Withdraw : ";
            cin >> amount;
            if (accountType == "Saving") {
                savAcc.withdraw(amount);
            } else {
                curAcc.withdraw(amount);
            }
            if (accountType == "Saving") {
                savAcc.displayBalance();
            } else {
                curAcc.displayBalance();
            }
            break;
        case 3:
            if (accountType == "Saving") {
                savAcc.displayBalance();
            } else {
                curAcc.displayBalance();
            }
            break;
        case 4:
            if (accountType == "Saving") {
                savAcc.displayCustomerDetails();
                savAcc.displayBalance();
            } else {
                curAcc.displayCustomerDetails();
                curAcc.displayBalance();
            }
            break;
        case 5:
            cout << "Thank You for Banking with us.." << endl;
            break;
        default:
            cout << "Invalid choice! Please choose again." << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}