#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    double mileage;
public:
    Car(const string &carMake, const string &carModel, int carYear, double carMileage) {
        make = carMake;
        model = carModel;
        year = carYear;
        mileage = carMileage;
        cout << "Car created: " << year << " " << make << " " << model << " with mileage " << mileage << " miles." << endl;
    }
    ~Car() {
        cout << "Car destroyed: " << year << " " << make << " " << model << "." << endl;
    }
    void displayDetails() const {
        cout << "Car details: " << year << " " << make << " " << model << " with mileage " << mileage << " miles." << endl;
    }
    void updateMileage(double newMileage) {
        if (newMileage > mileage) {
            mileage = newMileage;
            cout << "Mileage updated to " << mileage << " miles." << endl;
        } else {
            cout << "New mileage must be greater than the current mileage." << endl;
        }
    }
};
int main() {
    Car myCar("Toyota", "Corolla", 2022, 15000.0);
    myCar.displayDetails();
    myCar.updateMileage(16000.0);
    return 0;
}