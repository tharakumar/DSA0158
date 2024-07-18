#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    int employeeID;
    string employeeName;
public:
    void setEmployeeDetails(int id, string name) {
        employeeID = id;
        employeeName = name;
    }
    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
    }
};
class Salary : public Employee {
protected:
    double basicSalary;
public:
    void setBasicSalary(double salary) {
        basicSalary = salary;
    }
    void displayBasicSalary() {
        cout << "Basic Salary: " << basicSalary << endl;
    }
};
class GrossSalary : public Salary {
protected:
    double grossSalary;
public:
    void calculateGrossSalary() {
        double hra = 0.10 * basicSalary;
        double da = 0.05 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }
    void displayGrossSalary() {
        cout << "Gross Salary = Rs." << grossSalary << endl;
    }
};
class NetSalary : public GrossSalary {
private:
    double netSalary;
public:
    void calculateNetSalary() {
        double deduction = 500;
        netSalary = grossSalary - deduction;
    }
    void displayNetSalary() {
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};
int main() {
    NetSalary employee;
    int employeeID;
    string employeeName;
    double basicSalary;
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cin.ignore(); 
    cout << "Enter Employee Name: ";
    getline(cin, employeeName);
    cout << "Enter basic salary of Employee: ";
    cin >> basicSalary;
    employee.setEmployeeDetails(employeeID, employeeName);
    employee.setBasicSalary(basicSalary);
    employee.calculateGrossSalary();
    employee.calculateNetSalary();
    employee.displayEmployeeDetails();
    employee.displayGrossSalary();
    employee.displayNetSalary();
    return 0;
}