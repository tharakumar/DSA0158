#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    string gender;
public:
    Person(const string &name, int age, const string &gender)
        : name(name), age(age), gender(gender) {}
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }
    void setName(const string &name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setGender(const string &gender) { this->gender = gender; }
};
class Student : public Person {
private:
    int rollNumber;
    string studentClass;
public:
    Student(const string &name, int age, const string &gender, int rollNumber, const string &studentClass)
        : Person(name, age, gender), rollNumber(rollNumber), studentClass(studentClass) {}
    int getRollNumber() const { return rollNumber; }
    string getStudentClass() const { return studentClass; }
    void setRollNumber(int rollNumber) { this->rollNumber = rollNumber; }
    void setStudentClass(const string &studentClass) { this->studentClass = studentClass; }
};
class Teacher : public Person {
private:
    string subject;
    double salary;
public:
    Teacher(const string &name, int age, const string &gender, const string &subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}
    string getSubject() const { return subject; }
    double getSalary() const { return salary; }
    void setSubject(const string &subject) { this->subject = subject; }
    void setSalary(double salary) { this->salary = salary; }
};
int main() {
    Student student("Alice", 20, "Female", 101, "12th Grade");
    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Age: " << student.getAge() << endl;
    cout << "Student Gender: " << student.getGender() << endl;
    cout << "Student Roll Number: " << student.getRollNumber() << endl;
    cout << "Student Class: " << student.getStudentClass() << endl;
    Teacher teacher("Bob", 45, "Male", "Mathematics", 50000);
    cout << "Teacher Name: " << teacher.getName() << endl;
    cout << "Teacher Age: " << teacher.getAge() << endl;
    cout << "Teacher Gender: " << teacher.getGender() << endl;
    cout << "Teacher Subject: " << teacher.getSubject() << endl;
    cout << "Teacher Salary: " << teacher.getSalary() << endl;
    return 0;
}