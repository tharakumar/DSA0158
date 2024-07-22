#include <iostream>
#include <stdexcept>
using namespace std;
class Student {
    int marks[4];
    string subjects[4] = {"Python", "C Programming", "Mathematics", "Physics"};
public:
    void getMarks() {
        for (int i = 0; i < 4; ++i) {
            cout << "Enter the marks in " << subjects[i] << ": ";
            cin >> marks[i];
        }
    }
    void calculateGrade() {
        int total = 0;
        for (int i = 0; i < 4; ++i) {
            if (marks[i] < 50) {
                throw runtime_error("Fail");
            }
            total += marks[i];
        }
        double aggregate = total / 4.0;
        cout << "Total Marks: " << total << endl;
        cout << "Aggregate Marks: " << aggregate << endl;
        cout << "Grade: Pass" << endl;
    }
};
int main() {
    Student student;
    try {
        student.getMarks();
        student.calculateGrade();
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}