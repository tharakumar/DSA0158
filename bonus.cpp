#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    double base_salary;
public:
    virtual void getdata() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter base salary: ";
        cin >> base_salary;
        cin.ignore();  
    }
    virtual void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Base Salary: " << base_salary << endl;
    }
    virtual double bonus() {
        return base_salary; 
    }
};
class Admin : virtual public Person {
public:
    double bonus() override {
        return base_salary * 1.1;
    }
};
class Account : virtual public Person {
public:
    double bonus() override {
        return base_salary * 1.15;
    }
};
class Master : public Admin, public Account {
public:
    void getdata() override {
        Person::getdata(); 
    }
    void displaydata() override {
        Person::displaydata();
    }
    double bonus() override {
        return Admin::bonus();
    }
};
int main() {
    Master master_employee;
    master_employee.getdata();
    master_employee.displaydata();
    cout << "Bonus: " << master_employee.bonus() << endl;
    return 0;
}