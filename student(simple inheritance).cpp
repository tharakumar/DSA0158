#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    char gender;
    void setBasicInfo() {
        cout << "Enter student's basic information:" << endl;
        cout << "Name?: ";
        getline(cin, name);
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
        cin.ignore();
    }
    void displayBasicInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};
class Result : public Student {
public:
    int totalMarks;
    char grade;
    void setResultInfo() {
        cout << "Enter student's result information:" << endl;
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }
    void displayResultInfo() {
        double percentage = (totalMarks / 500.0) * 100; // Assuming total marks out of 500
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << ", Grade: " << grade << endl;
    }
    void displayInfo() {
        displayBasicInfo();
        displayResultInfo();
    }
};
int main() {
    Result student;
    student.setBasicInfo();
    student.setResultInfo();
    cout << "\nInserted Data is:" << endl;
    student.displayInfo();
    return 0;
}