#include <iostream>
using namespace std;
class Person {
protected:
    float salary;
public:
    Person() : salary(0) {}
    virtual void getdata() {
        cout << "Enter the salary: ";
        cin >> salary;
    }
    virtual void displaydata() {
        cout << "Salary: " << salary << endl;
    }
    virtual float bonus() {
        return salary * 1.02;
    }
};
class Admin : virtual public Person {
public:
    void getdata() override {
        cout << "Enter the salary for Admin: ";
        cin >> salary;
    }
    void displaydata() override {
        cout << "Admin's Salary: " << salary << endl;
    }
    float bonus() override {
        return salary * 1.02;  
    }
};
class Account : virtual public Person {
public:
    void getdata() override {
        cout << "Enter the salary for Account: ";
        cin >> salary;
    }
    void displaydata() override {
        cout << "Account's Salary: " << salary << endl;
    }
    float bonus() override {
        return salary * 1.02; 
    }
};
class Master : public Admin, public Account {
public:
    void getdata() override {
        cout << "Enter the salary for Master: ";
        cin >> salary;
    }
    void displaydata() override {
        cout << "Master's Salary: " << salary << endl;
    }
    float bonus() override {
        return salary * 1.02;
    }
};
int main() {
    Person *personPtr;
    Master master;
    personPtr = &master;
    personPtr->getdata();
    personPtr->displaydata();
    float bonusAmount = personPtr->bonus();
    cout << "Bonus = " << bonusAmount << endl;
    return 0;
}