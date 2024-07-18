#include <iostream>
#include <string>
using namespace std;
class Patient {
protected:
    string patientName;
    int bedNumber;
    string wardName;
    double dues;
public:
    void setPatientDetails(string pname, int bnum, string wname, double d) {
        patientName = pname;
        bedNumber = bnum;
        wardName = wname;
        dues = d;
    }
    void displayPatientDetails() {
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Total Dues of Patient: " << dues << endl;
    }
};
class Doctor : public Patient {
private:
    string doctorName;
    string degree;
public:
    void setDoctorDetails(string dname, string deg) {
        doctorName = dname;
        degree = deg;
    }
    void displayDoctorDetails() {
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << degree << endl;
    }
    void displayDetails() {
        displayPatientDetails();
        displayDoctorDetails();
    }
};
int main() {
    Doctor doc;
    string patientName, wardName, doctorName, degree;
    int bedNumber;
    double dues;
    cout << "Enter Patient Name: ";
    getline(cin, patientName);
    cout << "Enter Bed Number: ";
    cin >> bedNumber;
    cin.ignore(); 
    cout << "Enter Ward Name: ";
    getline(cin, wardName);
    cout << "Enter the Doctor Name: ";
    getline(cin, doctorName);
    cout << "Enter Doctorate Degree: ";
    getline(cin, degree);
    cout << "Enter Dues of Patient: ";
    cin >> dues;
    doc.setPatientDetails(patientName, bedNumber, wardName, dues);
    doc.setDoctorDetails(doctorName, degree);
    cout << "\nInserted Data is:" << endl;
    doc.displayDetails();
    return 0;
}