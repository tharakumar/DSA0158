#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    int rollNumber;
public:
    Student(string n, int a, int r) : name(n), age(a), rollNumber(r) {}
    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << endl;
    }
};
int main() {
    const int numberOfStudents = 3;
    Student students[numberOfStudents] = {
        Student("Alice", 20, 101),
        Student("Bob", 21, 102),
        Student("Charlie", 22, 103)
    };
    for (int i = 0; i < numberOfStudents; ++i) {
        students[i].displayDetails();
    }
    return 0;
}