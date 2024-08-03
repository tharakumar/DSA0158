#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(const string &name, int age) : name(name), age(age) {}
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Person person("Alice", 30);
    Person* ptr = &person;
    cout << "Person's attributes via pointer:" << endl;
    ptr->display(); 
    cout << "Name via pointer: " << ptr->name << endl;
    cout << "Age via pointer: " << ptr->age << endl;
    return 0;
}