#include <iostream>
using namespace std;
class Person {
public:
    virtual void work() const {
        cout << "Person is working" << endl;
    }
    virtual ~Person() {}
};
class Employee : public Person {
public:
    void work() const override {
        cout << "Employee is working on tasks" << endl;
    }
};
class Manager : public Person {
public:
    void work() const override {
        cout << "Manager is managing the team" << endl;
    }
};
int main() {
    Employee emp;
    Manager mgr;
    Person *p;
    p = &emp;
    p->work();
    p = &mgr;
    p->work();
    return 0;
}