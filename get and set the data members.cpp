#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(const std::string &make, const std::string &model, int year)
        : make(make), model(model), year(year) {}
    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    void setMake(const std::string &make) { this->make = make; }
    void setModel(const std::string &model) { this->model = model; }
    void setYear(int year) { this->year = year; }
};
class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(const std::string &make, const std::string &model, int year, int seatingCapacity, const std::string &fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}
    int getSeatingCapacity() const { return seatingCapacity; }
    string getFuelType() const { return fuelType; }
    void setSeatingCapacity(int seatingCapacity) { this->seatingCapacity = seatingCapacity; }
    void setFuelType(const std::string &fuelType) { this->fuelType = fuelType; }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;
public:
    Truck(const std::string &make, const std::string &model, int year, double payloadCapacity, double towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}
    double getPayloadCapacity() const { return payloadCapacity; }
    double getTowingCapacity() const { return towingCapacity; }
    void setPayloadCapacity(double payloadCapacity) { this->payloadCapacity = payloadCapacity; }
    void setTowingCapacity(double towingCapacity) { this->towingCapacity = towingCapacity; }
};
int main() {
    Car car("Toyota", "Camry", 2020, 5, "Gasoline");
    cout << "Car Make: " << car.getMake() <<endl;
    cout << "Car Model: " << car.getModel() <<endl;
    cout << "Car Year: " << car.getYear() <<endl;
    cout << "Car Seating Capacity: " << car.getSeatingCapacity() <<endl;
    cout << "Car Fuel Type: " << car.getFuelType() <<endl;
    Truck truck("Ford", "F-150", 2021, 3000.5, 13000.75);
    cout << "Truck Make: " << truck.getMake() <<endl;
    cout << "Truck Model: " << truck.getModel() <<endl;
    cout << "Truck Year: " << truck.getYear() <<endl;
    cout << "Truck Payload Capacity: " << truck.getPayloadCapacity() <<endl;
    cout << "Truck Towing Capacity: " << truck.getTowingCapacity() <<endl;
    return 0;
}