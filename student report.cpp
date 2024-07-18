#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int rollNumber;
    string name;
    string address;
    string city;
public:
    void setStudentDetails(int roll, string n, string addr, string c) {
        rollNumber = roll;
        name = n;
        address = addr;
        city = c;
    }
    void displayStudentDetails() {
        cout << "Student Details:" << endl;
        cout << "********************" << endl;
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
    }
};
class Report : public Student {
private:
    int marks1, marks2, marks3;
public:
    void setMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void displayMarks() {
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
    }
    double calculatePercentage() {
        return (marks1 + marks2 + marks3) / 3.0;
    }
    char calculateGrade() {
        double percentage = calculatePercentage();
        if (percentage >= 90) return 'A';
        else if (percentage >= 80) return 'B';
        else if (percentage >= 70) return 'C';
        else if (percentage >= 60) return 'D';
        else return 'F';
    }
    void displayReport() {
        displayStudentDetails();
        displayMarks();
        double percentage = calculatePercentage();
        cout << "Total percentage: " << percentage << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};
int main() {
    Report student;
    int rollNumber, marks1, marks2, marks3;
    string name, address, city;
    cout << "Enter student roll number: ";
    cin >> rollNumber;
    cin.ignore(); 
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student address: ";
    getline(cin, address);
    cout << "Enter student city: ";
    getline(cin, city);
    student.setStudentDetails(rollNumber, name, address, city);
    cout << "Enter the marks1: ";
    cin >> marks1;
    cout << "Enter the marks2: ";
    cin >> marks2;
    cout << "Enter the marks3: ";
    cin >> marks3;
    student.setMarks(marks1, marks2, marks3);
    student.displayReport();
    return 0;
}