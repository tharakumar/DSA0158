#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basic_salary;
    float hra;
    float da;
    float gp; // Gross Pay
    float np; // Net Pay

public:
    void get_data() {
        cout << "Enter the employee name: ";
        cin >> ws; // To ignore leading whitespace
        getline(cin, name);
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basic_salary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        calculate_pay();
    }

    void calculate_pay() {
        gp = basic_salary + hra + da;
        np = gp - (hra + da); // Assuming HRA and DA are deductions
    }

    void display_data() const {
        cout << name << "\t" << id << "\t" << basic_salary << "\t" << hra << "\t" << da << "\t" << gp << "\t" << np << endl;
    }
};

int main() {
    int num_employees;

    cout << "****************" << endl;
    cout << "Employee details" << endl;
    cout << "****************" << endl;
    cout << "Enter the number of employees: ";
    cin >> num_employees;

    Employee* employees = new Employee[num_employees];

    for (int i = 0; i < num_employees; ++i) {
        cout << "\nEmployee " << i + 1 << " details:" << endl;
        employees[i].get_data();
    }

    cout << "\nEMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP" << endl;
    for (int i = 0; i < num_employees; ++i) {
        employees[i].display_data();
    }

    delete[] employees;

    return 0;
}
