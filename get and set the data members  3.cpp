#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(const string &name, int id, double salary)
        : name(name), id(id), salary(salary) {}
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }
    void setName(const string &name) { this->name = name; }
    void setId(int id) { this->id = id; }
    void setSalary(double salary) { this->salary = salary; }
};
class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(const string &name, int id, double salary, const string &department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}
    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }
    void setDepartment(const string &department) { this->department = department; }
    void setBonus(double bonus) { this->bonus = bonus; }
};
class Engineer : public Employee {
private:
    string specialty;
    int hours;
public:
    Engineer(const string &name, int id, double salary, const string &specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}
    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }
    void setSpecialty(const string &specialty) { this->specialty = specialty; }
    void setHours(int hours) { this->hours = hours; }
};
int main() {
    Manager manager("Alice", 101, 80000, "Sales", 5000);
    cout << "Manager Name: " << manager.getName() << endl;
    cout << "Manager ID: " << manager.getId() << endl;
    cout << "Manager Salary: " << manager.getSalary() << endl;
    cout << "Manager Department: " << manager.getDepartment() << endl;
    cout << "Manager Bonus: " << manager.getBonus() << endl;
    Engineer engineer("Bob", 102, 70000, "Software", 40);
    cout << "Engineer Name: " << engineer.getName() << endl;
    cout << "Engineer ID: " << engineer.getId() << endl;
    cout << "Engineer Salary: " << engineer.getSalary() << endl;
    cout << "Engineer Specialty: " << engineer.getSpecialty() << endl;
    cout << "Engineer Hours: " << engineer.getHours() << endl;
    return 0;
}