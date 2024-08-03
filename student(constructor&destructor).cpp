#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    double GPA;
public:
    Student(const string &studentName, int studentRollNumber, double studentGPA) {
        name = studentName;
        rollNumber = studentRollNumber;
        GPA = studentGPA;
        cout << "Student created: " << name << ", Roll Number: " << rollNumber << ", GPA: " << GPA << endl;
    }
    ~Student() {
        cout << "Student destroyed: " << name << ", Roll Number: " << rollNumber << endl;
    }
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "GPA: " << GPA << endl;
    }
    void updateGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            GPA = newGPA;
            cout << "GPA updated to " << GPA << endl;
        } else {
            cout << "Invalid GPA value. GPA must be between 0.0 and 4.0." << endl;
        }
    }
};
int main() {
    Student student("John Doe", 12345, 3.75);
    student.displayDetails();
    student.updateGPA(3.90);
    return 0;
}