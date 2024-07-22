#include <iostream>
#include <iomanip>
using namespace std;
class Bank {
public:
    virtual float getRateOfInterest() = 0;
};
class SBI : public Bank {
public:
    float getRateOfInterest() override {
        return 10.0;
    }
};
class ICICI : public Bank {
public:
    float getRateOfInterest() override {
        return 12.0;
    }
};
class AXIS : public Bank {
public:
    float getRateOfInterest() override {
        return 11.0; 
    }
};
int main() {
    double principal;
    int years;
    int choice;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Choose the bank: \n1. SBI\n2. ICICI\n3. AXIS\n";
    cin >> choice;
    Bank* bank;
    switch(choice) {
        case 1:
            bank = new SBI();
            break;
        case 2:
            bank = new ICICI();
            break;
        case 3:
            bank = new AXIS();
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }
    float rate = bank->getRateOfInterest();
    double simpleInterest = (principal * rate * years) / 100;
    cout << "Simple Interest: " << fixed << setprecision(2) << simpleInterest << endl;
    delete bank;
    return 0;
}