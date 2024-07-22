#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(const string &n, const string &id, float salary)
        : name(n), emp_id(id), basic_salary(salary) {}
    virtual void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};
class Pay : public Employee {
private:
    float gross_salary;
    float deductions;
    float net_salary;
public:
    Pay(const string &n, const string &id, float salary)
        : Employee(n, id, salary), gross_salary(0), deductions(0), net_salary(0) {}
    void calculatePay() {
        gross_salary = basic_salary + (0.70 * basic_salary);
        deductions = 0.50 * basic_salary;
        net_salary = gross_salary - deductions;
    }
    void displayPay() const {
        displayDetails();
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};
int main() {
    string name, emp_id;
    float salary;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    getline(cin, emp_id);
    cout << "Enter Employee Salary: ";
    cin >> salary;
    Pay employee(name, emp_id, salary);
    employee.calculatePay();
    employee.displayPay();
    return 0;
}